#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(12);
    st.insert(24);
    st.insert(36);
    st.insert(12);
    cout << "Size of the set: " << st.size() << "\n"; // Size = 3 as 12 repeats

    auto it = st.find(24);
    if (it != st.end())
    {
        cout << "Found: " << *(it) << "\n";
    }
    else
    {
        cout << "24 not found in the set.\n";
    }

    return 0;
}