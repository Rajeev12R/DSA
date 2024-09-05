#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            cout << true << endl;
            break;
        }
        else
        {
            cout << false << endl;
        }
    }
    return 0;
}