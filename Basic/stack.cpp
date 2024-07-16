#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(34);
    st.push(44);
    st.push(54);
    st.push(64);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;


    return 0;
}