#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(23);
    dq.push_back(47); // replaced emplace_back with push_back
    dq.push_front(59);

    cout << dq[0] << " " << dq[1] << " " << dq[2] << " " << dq[3] << " ";

    return 0;
}