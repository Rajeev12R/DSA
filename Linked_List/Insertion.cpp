#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
node *insert(node *head, int val)
{
    node *newE = new node(val);
    if (head == nullptr)
    {
        head = newE;
        return head;
    };
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node* addHead(node* head, int el){
    node* temp = new node(el, head);
    return temp;
}
void printAll(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int n;
    cin >> n;
    node *head = nullptr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        head = insert(head, val);
    }
    int el;
    cin >> el;
    head = addHead(head, el);
    printAll(head);

    return 0;
}