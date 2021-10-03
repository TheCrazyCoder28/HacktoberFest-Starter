'''Program to perfom DFS traversal'''
''' Graph is denoted by graph '''
graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8'],
  '8' : []
}

# visited nodes.
visit = set() 

#DFS FUNCTION
def dfs(visit, g, node):  
  if node not in visit:
    print (node)
    visit.add(node)
    for neighbour in g[node]:
      dfs(visit, graph, neighbour)

print("DFS traversal is:")
dfs(visit, graph, '5')
