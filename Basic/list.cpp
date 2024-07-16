#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(10);
    ls.push_back(100);
    ls.push_back(1000);
    ls.push_front(23);

    for (int it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}