
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

// node * addHead(node* head, ){

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
//     int el;
//     cin >> el;

//     head = addHead(arr, head, el);
//     printAll(head);
// }

