// Brute force (using Bubble sort)
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
for(int i = n-1; i >=0 ; i--){
    for(int j = 0; j < n-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}
if(arr[n-2] == arr[n-1]){
cout << arr[n-3];

}
else{
    cout << arr[n-2] ;
}
return 0;
}

*/
// Optimal Case

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
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int secondlargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largest && arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    cout << secondlargest;

    return 0;
}
