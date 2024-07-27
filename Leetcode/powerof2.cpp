#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans;
    int org = n;
    cout << "Enter the number: ";
    cin >> n;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            cout << 0;
            break;
        }
        else
        {
            cout << 1;
            break;
        }
    }
}