/*#include <bits/stdc++.h>
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
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node *deleteHead(node *head)
{
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
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
    head = deleteHead(head);
    printAll(head);
}*/

/*

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
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node *deleteTail(node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
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
    head = deleteTail(head);
    printAll(head);
}


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
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node *deletek(node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (k ==1)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    node* temp = head;
    node* prev = nullptr;
    while(temp != nullptr){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
    
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
    int k;
    cin >> k;
    head = deletek(head, k);
    printAll(head);
}
*/

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
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node *deleteel(node *head, int el)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->data == el)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    node* temp = head;
    node* prev = nullptr;
    while(temp != nullptr){
        count++;
        if(temp->data == el){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
    
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
    head = deleteel(head, el);
    printAll(head);
}
