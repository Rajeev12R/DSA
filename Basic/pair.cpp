#include<bits/stdc++.h>
using namespace std;

// void explainPair(){
//     pair<int, int> p(1, 4);
//     cout << p.first << " " << p.second << endl;
// }

// void demoPair(){
//     pair<int, int> innerPair(3, 4);
//     pair<int, pair<int, int> > q(1, innerPair);
//     cout << q.first << " " << q.second.first << " " << q.second.second << endl;
// }

// void explainPair(){
//     pair<int, int> arr[] = {{7, 8}, {8,9}, {9, 10}};
//     cout << arr[1].first;
// }

int main() {
    pair<int, int>p(1, 4);
    cout << p.first << " " << p.second << endl;
    pair<int, int>t(1, 3);
    pair<int , pair<int,int> >r(1, t);
    cout << r.first << " " << r.second.first << " " << r.second.second << "\n";
    return 0;
}
