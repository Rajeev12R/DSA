#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
string name = "Rajeev";
void re()
{
    if (cnt == 6)
        return;
    cout << cnt << " " << name << endl;
    cnt++;
    re();
}
int main()
{
    re();
}