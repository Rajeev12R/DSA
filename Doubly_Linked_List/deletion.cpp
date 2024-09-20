/*
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *back;

public:
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node *insert(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
node *deleteTail(node* head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    // node *head = new node(arr[0]);
    node *prev = head;

    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

void printAll(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *head = insert(arr);

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
    node *back;

public:
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node *insert(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
node *deleteTail(node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    node *prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

void printAll(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *head = insert(arr);

    head = deleteTail(head);
    printAll(head);
}
*/
// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node *back;

// public:
//     node(int data1, node *next1, node *back1)
//     {
//         data = data1;
//         next = next1;
//         back = back1;
//     }

// public:
//     node(int data1)
//     {
//         data = data1;
//         next = nullptr;
//         back = nullptr;
//     }
// };
// node *insert(vector<int> &arr)
// {
//     node *head = new node(arr[0]);
//     node *prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         node *temp = new node(arr[i], nullptr, prev);
//         prev->next = temp;
//         prev = temp;
//     }
//     return head;
// }

// node *deleteHead(node *head)
// {
//     if (head == nullptr || head->next == nullptr)
//     {
//         return nullptr;
//     }
//     // node *head = new node(arr[0]);
//     node *prev = head;

//     head = head->next;

//     head->back = nullptr;
//     prev->next = nullptr;
//     delete prev;
//     return head;
// }
// node *deleteTail(node *head)
// {
//     if (head == nullptr || head->next == nullptr)
//     {
//         return nullptr;
//     }
//     node *tail = head;
//     while (tail->next != nullptr)
//     {
//         tail = tail->next;
//     }
//     node *prev = tail->back;
//     prev->next = nullptr;
//     tail->back = nullptr;
//     delete tail;
//     return head;
// }
// node *deletek(node *head, int k)
// {
//     if (head == nullptr)
//     {
//         return nullptr;
//     }
//     int count = 0;
//     node *temp = head;
//     while (temp != nullptr)
//     {
//         count++;
//         if (count == k)
//         {
//             break;
//         }
//         temp = temp->next;
//     }
//     node *prev = temp->back;
//     node *front = temp->next;
//     if (prev == nullptr && front == nullptr)
//     {
//         delete temp;
//         return nullptr;
//     }
//     else if (prev == nullptr)
//     {
//         return deleteHead(head);
//     }
//     else if (front == nullptr)
//     {
//         delete deleteTail(head);
//     }
//     prev->next = front;
//     front->back = prev;

//     temp->next = nullptr;
//     temp->back = nullptr;
//     delete temp;
//     return head;
// }

// void printAll(node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     node *head = insert(arr);
//     int k;
//     cin >> k;

//     head = deletek(head, k);
//     printAll(head);
// }

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *back;

public:
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node *insert(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

node *deleteHead(node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    // node *head = new node(arr[0]);
    node *prev = head;

    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
node *deleteTail(node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    node *prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}
node *deleteNode(node *head, int el)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    node *temp = head;
    while (temp != nullptr)
    {
        if (el == arr[i])
        {
            break;
        }
        temp = temp->next;
    }
    node *prev = temp->back;
    node *front = temp->next;
    if (prev == nullptr && front == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return deleteHead(head);
    }
    else if (front == nullptr)
    {
        delete deleteTail(head);
    }
    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

void printAll(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *head = insert(arr);
    int el;
    cin >> el;

    head = deleteNode(head, el);
    printAll(head);
}
