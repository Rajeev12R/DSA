#include <bits/stdc++.h>
using namespace std;
void f(int i, int mul)
{
    if (i < 1)
    {
        cout << mul;
        return;
    }
    f(i - 1, mul * i);
}
int main()
{
    int n;
    cin >> n;
    f(n, 1);
    return 0;
}