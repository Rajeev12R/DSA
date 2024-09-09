// Brute force
/*
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
    int first = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
        arr[n-1] = first;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d; cin >> d;
    int temp[d];
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }

    for (int i = d; i <=n; i++)
    {
        arr[i - d] = arr[i];
    }
    int j =0;
    for(int i = n-d; i < n; i++){
        arr[i] = temp[j];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
return 0;
}