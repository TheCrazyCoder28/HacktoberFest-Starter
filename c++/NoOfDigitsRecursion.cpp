#include <iostream>
using namespace std;

int countDigits(int n)
{

    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number\n";
    cin >> n;

    cout << countDigits(n) << endl;

    return 0;
}
