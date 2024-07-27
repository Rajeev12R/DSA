#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}