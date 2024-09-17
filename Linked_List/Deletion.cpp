// Head Deletion
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
node *deleteHead(node *head)
{
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

void printHead(node *head)
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
    printHead(head);
    return 0;
}


// Tail Deletion
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
    node *temp = head;
    while (temp->next->next != nullptr)
    {
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

    return 0;
}

// Kth position deletion

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
        return head;
    }
    if (k == 1)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    node *temp = head;
    node *prev = nullptr;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
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

    return 0;
}

*/

// Element Deletion

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;

// public:
//     node(int data1, node *next1)
//     {
//         data = data1;
//         next = next1;
//     }

// public:
//     node(int data1)
//     {
//         data = data1;
//         next = nullptr;
//     }
// };

// node *insert(node *head, int val)
// {
//     node *newE = new node(val);
//     if (head == nullptr)
//     {
//         head = newE;
//         return head;
//     }
//     node *temp = head;
//     while (temp->next)
//     {
//         temp = temp->next;
//     }
//     temp->next = newE;
//     return head;
// }
// node *deletek(node *head, int el)
// {
//     if (head == NULL)
//     {
//         return head;
//     }
//     if (head->data == el)
//     {
//         node *temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }
//     node *temp = head;
//     node *prev = nullptr;
//     while (temp != nullptr)
//     {
//         if (temp->data == el)
//         {
//             prev->next = prev->next->next;
//             delete temp;
//             break;
//         }
//         prev = temp;
//         temp = temp->next;
//     }
//     return head;
// }
// void printAll(node *head)
// {
//     node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     node *head = nullptr;
//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin >> val;
//         head = insert(head, val);
//     }
//     int el;
//     cin >> el;

//     head = deletek(head, el);
//     printAll(head);

//     return 0;
// }
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
        return newE;
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newE;
    return head;
}
node *deleteSecond(node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    if (head->next->next == nullptr)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    node *prev = nullptr;
    node *temp = head;
    while (temp->next->next)
    {
        prev = temp;
        temp = temp->next;
    }
    node* second = temp;
    temp= temp->next;
    prev->next = temp;
    delete second;
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
    cout << "Original Linked List: ";
    printAll(head);
    head = deleteSecond(head);
    cout << endl;
    cout << "Updated Linked List: ";
    printAll(head);
}