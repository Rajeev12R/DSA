#include <bits/stdc++.h>
using namespace std;
int i = 0;
int n = 5;
void f(i, n)
{
    if (i > n)
        return;
    cout << "Rajeev" << endl;
    i++;
    f(i, n);
}
int main()
{
    f(i, n);
    return 0;
}