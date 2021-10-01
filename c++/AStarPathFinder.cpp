#include <iostream>
#include <list>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

#define INF 999999

struct Node
{
    int row;
    int col;
    Node *parentNode;
    vector<Node *> vecNeightbors;
    float globalGoal;
    float localGoal;
    bool isVisited = false;
    bool isWall = false;

    void printNode()
    {
        cout << row << ", " << col << endl;
    }
};

void Solve_Astar(Node *nodes, Node *startNode, Node *endNode, int gridWidth, int gridHeight)
{
    for (int i = 0; i < gridWidth; i++)
    {
        for (int j = 0; j < gridHeight; j++)
        {
            nodes[j * gridWidth + i].isVisited = false;
            nodes[j * gridWidth + i].globalGoal = INF;
            nodes[j * gridWidth + i].localGoal = INF;
            nodes[j * gridWidth + i].parentNode = nullptr;
        }
    }

    auto distance = [](Node *a, Node *b)
    {
        return sqrtf((a->row - b->row) * (a->row - b->row) + (a->col - b->col) * (a->col - b->col));
    };

    auto heuristic = [distance](Node *a, Node *b)
    {
        return distance(a, b);
    };

    Node *currentNode = startNode;
    startNode->localGoal = 0.0f;
    startNode->globalGoal = heuristic(startNode, endNode);

    list<Node *> unvisitedNodes;
    unvisitedNodes.emplace_back(startNode);

    while (!unvisitedNodes.empty() && currentNode != endNode)
    {
        unvisitedNodes.sort([](Node *lhs, Node *rhs)
                            { return lhs->globalGoal < rhs->globalGoal; });

        while (!unvisitedNodes.empty() && unvisitedNodes.front()->isVisited)
            unvisitedNodes.pop_front();

        if (unvisitedNodes.empty())
            break;

        currentNode = unvisitedNodes.front();
        currentNode->isVisited = true;

        for (auto neighbor : currentNode->vecNeightbors)
        {
            if (!neighbor->isVisited && neighbor->isWall == 0)
                unvisitedNodes.emplace_back(neighbor);

            float possibleLowerGoal = currentNode->isVisited + distance(currentNode, neighbor);

            if (possibleLowerGoal < neighbor->localGoal)
            {
                neighbor->parentNode = currentNode;
                neighbor->localGoal = possibleLowerGoal;

                neighbor->globalGoal = neighbor->localGoal + heuristic(neighbor, endNode);
            }
        }
    }
}

int main()
{
    vector<Node *> optimumPath;
    Node *nodes = nullptr;

    int gridWidth = 5;
    int gridHeight = 5;

    nodes = new Node[gridWidth * gridHeight];

    for (int i = 0; i < gridWidth; i++)
    {
        for (int j = 0; j < gridHeight; j++)
        {
            nodes[j * gridWidth + i].row = i;
            nodes[j * gridWidth + i].col = j;
            nodes[j * gridWidth + i].isWall = false;
            nodes[j * gridWidth + i].parentNode = nullptr;
            nodes[j * gridWidth + i].isVisited = false;
        }
    }

    for (int i = 0; i < gridWidth; i++)
    {
        for (int j = 0; j < gridHeight; j++)
        {
            if (j > 0)
            {
                nodes[j * gridWidth + i].vecNeightbors.emplace_back(&nodes[(j - 1) * gridWidth + i]);
            }
            if (j < gridWidth - 1)
            {
                nodes[j * gridWidth + i].vecNeightbors.emplace_back(&nodes[(j + 1) * gridWidth + i]);
            }
            if (i > 0)
            {
                nodes[j * gridWidth + i].vecNeightbors.emplace_back(&nodes[j * gridWidth + (i - 1)]);
            }
            if (i < gridHeight - 1)
            {
                nodes[j * gridWidth + i].vecNeightbors.emplace_back(&nodes[j * gridWidth + (i + 1)]);
            }
        }
    }

    Node *startNode = nullptr;
    Node *endNode = nullptr;

    startNode = &nodes[(gridWidth / 2) * gridWidth + 1];
    endNode = &nodes[(gridHeight / 2) * gridWidth + (gridWidth - 2)];

    Solve_Astar(nodes, startNode, endNode, gridWidth, gridHeight);

    if (endNode != nullptr)
    {
        Node *p = endNode;
        while (p->parentNode != nullptr)
        {
            optimumPath.emplace_back(p);
            p = p->parentNode;
        }
    }
    
    for (auto i : optimumPath)
    {
        i->printNode();
    }
}