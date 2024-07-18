#include <bits/stdc++.h>
using namespace std;
int sum(int, int);
int sub(int, int);
int main()
{
    int num1, num2;
    cout << "Enter the first number ";
    cin >> num1;
    cout << "\nEnter the second number ";
    cin >> num2;
    cout << "\nThe sum is " << sum(num1, num2);
    // cout << "\nThe sub is " << sub(num1, num2);
    int num3, num4;
    cout << "\nEnter the first number ";
    cin >> num3;
    cout << "\nEnter the second number ";
    cin >> num4;
    cout << "\nThe sub is " << sub(num3, num4);
    return 0;
}
int sum(int x, int y)
{
    int z = x + y;
    return z;
}
int sub(int a, int b)
{
    int c = a - b;
    return c;
}