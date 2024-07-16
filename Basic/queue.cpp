#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.front() << " " << q.front()+1 << " " << q.front()+2 << " " << q.front()+3 << "\n";
    cout << q.back() << " " << q.back()-1 << " " << q.back()-2 << " " << q.back()-3 << "\n";
    cout << q.size() << "\n";
    
    return 0;
}