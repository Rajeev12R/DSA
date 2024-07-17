#include <bits/stdc++.h>
using namespace std;
int ct = 0;
void re()
{
    if (ct == 3)
        return;
    cout << ct << endl;
    ct++;
    re();
}

int main()
{
    re();
    return 0;
}
