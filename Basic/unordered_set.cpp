#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> un;
    un.insert(1);
    un.insert(12);
    un.insert(31);
    un.insert(100);

    for (unordered_set<int>::iterator it = un.begin(); it != un.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}