/*
Brute Force Method

#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;

int cnt = 0;
char ch ;
cin >> ch;

for(int i = 0; i < s.size(); i++){
if(s[i] == ch){
    cnt++;
}
}
cout << cnt << endl;
return 0;
}


// Hashing Method

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    // Pre compute

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // Fetch
        cout << hash[c] << endl;
    }
    return 0;
}
*/

// Using map

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-compute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Check Arrangement
    for (auto it : mpp)
    {
        cout << it.first << "->" <<  " " << it.second;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;

        //  Fetch
        cout << mpp[num] << endl;
    }
    return 0;
}