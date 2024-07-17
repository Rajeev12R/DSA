#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(2, 100);     // 100 , 100
    v.insert(v.begin(), 300); // 300, 100, 100
    cout << v[0] << " " << v[1] << " " << v[2] << "\n";
    v.insert(v.begin()+1, 2, 10); // 300, 10, 10, 100, 100
    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << "\n";
    return 0;
}