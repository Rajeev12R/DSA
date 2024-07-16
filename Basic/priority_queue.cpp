#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  Max heap:
    
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(15);
    cout << "\n Maximum: " << pq.top() << " ";
    pq.pop();
    cout << "\n Maximum: "
         << pq.top() << " ";

    //  Min Heap
    
    priority_queue<int, vector<int>, greater<int> > pr;
    pr.push(90);
    pr.push(80);
    pr.push(70);
    cout << "\n Minimum: "
         << pr.top() << " ";
    return 0;
}