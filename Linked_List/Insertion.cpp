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
    };
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node *addHead(node *head, int el)
{
    node* newE = new node(el);
    if (head == nullptr)
    {
        return newE;
    }
    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    node* newNode = newE;
    temp->next = newNode;
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
    head = addHead(head, el);
    printAll(head);

    return 0;
}
*/
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
    };
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node *addelk(node *head, int k, int el)
{
    if (head == nullptr)
    {
        if (k == 1)
        {
            return new node(el);
        }
        else
        {
            return nullptr;
        }
    }
    if (k == 1)
    {
        node *temp = new node(el, head);
        return temp;
    }
    int count = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        count++;
        if (count == (k - 1))
        {
            node *newNode = new node(el);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
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
    int k, el;
    cin >> k >> el;
    head = addelk(head, k, el);
    printAll(head);

    return 0;
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
    };
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node *addelk(node *head, int v, int el)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->data == v)
    {
        return new node(el, head);
    }
    node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->next->data == v)
        {
            node *x = new node(el, temp->next);
            temp->next = x;
            break;
        }
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
    int v, el;
    cin >> v >> el;
    head = addelk(head, v, el);
    printAll(head);

    return 0;
}