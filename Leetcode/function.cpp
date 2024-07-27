#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}
int factorial(int n)
{
    int i = 1, ans = 1;
    while (i <= n)
    {
        ans = i * ans;
        i++;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The prime of a : " << prime(a) << endl;
    cout << "The factorial of a : " << factorial(a) << endl;
    cout << "The prime of b : " << prime(b) << endl;
    cout << "The factorial of b : " << factorial(b) << endl;
    cout << "The prime of b-a : " << prime(b - a) << endl;
    cout << "The factorial of b - a : " << factorial(b - a) << endl;
}