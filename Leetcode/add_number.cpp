#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int rem;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(n > 0){
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    cout << "Sum of the digits of the number is " << sum;

    return 0;
}