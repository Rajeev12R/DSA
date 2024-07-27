#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n == i * i)
        {
            cout << i;
        }
    }
}