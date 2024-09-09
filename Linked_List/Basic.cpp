#include <bits/stdc++.h>
using namespace std;
class Node
{
    /* data */
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 5};
    Node *y = new Node(arr[0]);
    cout << y << endl;
    cout << y->data;
}