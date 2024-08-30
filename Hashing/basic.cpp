#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cnt = cnt + 1;
        }
    }
    cout << cnt;

    return 0;
}