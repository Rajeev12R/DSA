#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n - r; c++)
            cout << " ";

        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}