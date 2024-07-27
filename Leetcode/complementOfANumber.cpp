#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0, mul = 1, rem;
    cout << "Enter the number: ";
    cin >> n;

    while (n)
    {
        rem = n % 2;
        ans = rem ^ 1;
        n = n / 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }

    return 0;
}