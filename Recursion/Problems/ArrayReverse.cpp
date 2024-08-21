#include <bits/stdc++.h>
using namespace std;
void f(int i, int n, int arr[])
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    f(i + 1, n, arr);
}
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    f(0, n, arr);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}