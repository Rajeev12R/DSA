#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(6);
    v.emplace_back(6);
    cout << v.size() << "\n";
    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << endl;
    v.pop_back();
    cout << v.size() << "\n";
    v.push_back(5);
    cout << v.size() << "\n";
    v.clear();
    cout << v.size() << "\n";
    vector<int> ve(50);
    cout << ve.size() << "\n";
    vector<int> vec(50, 20);
    cout << vec[49] << "\n";
    cout << vec[0] << "\n";

    vector<int> b;
    b.push_back(15);
    b.push_back(78);
    b.push_back(64);
    b.emplace_back(62);
    vector<int>::iterator i = b.begin();
    i++;
    cout << "Begin Iterator: \t" << *(i) << " ";

    i = i + 2;
    cout << *(i) << " \n";

    vector<int>::iterator j = b.end();
    j--;
    cout << "End Iterator: \t\t" << *(j) << " ";

    j = j - 1;
    cout << *(j) << " ";

    j = j - 1;
    cout << *(j) << " ";

    j = j - 1;
    cout << *(j) << " \n";

    vector<int>::reverse_iterator k = b.rend();
    k--;
    cout << "Rev End Iterator: \t" << *(k) << " ";
    k = k - 1;
    cout << *(k) << " ";
    k = k - 1;
    cout << *(k) << " ";
    k = k - 1;
    cout << *(k) << " \n";

    vector<int>::reverse_iterator l = b.rbegin();
    cout << "Rev Begin Iterator: \t" << *(l) << " ";
    l++;
    cout << *(l) << " ";
    l = l + 1;
    cout << *(l) << " ";
    l = l + 1;
    cout << *(l) << " \n";

    vector<int> demo;
    demo.push_back(10);
    demo.push_back(20);
    demo.push_back(30);
    cout << "Iterator Using Loop: \t";
    for (vector<int>::iterator it = demo.begin(); it != demo.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\nIterator Using auto: \t";
    for (auto it = demo.begin(); it != demo.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\nIterator using ForEach:\t";
    for (auto it : demo)
    {
        cout << it << " ";
    }

    return 0;
}