#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    cout << ms.size() << "\n";
    // ms.erase(2);
    // cout << ms.size();
    ms.erase(ms.find(2));
    cout << ms.size();

    return 0;
}