#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n-(r-1); c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}