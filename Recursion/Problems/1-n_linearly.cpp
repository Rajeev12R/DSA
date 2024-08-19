#include <bits/stdc++.h>
using namespace std;
void f(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    f(i + 1, n);
}
int main()
{
    int i = 1, n;
    cin >> n;
    f(i, n);
    return 0;
}