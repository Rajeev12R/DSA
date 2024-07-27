#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int r = 1; r <= n; r++)
    {
        char name = 'a' + r - 1;
        for (int c = 1; c <= r; c++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}