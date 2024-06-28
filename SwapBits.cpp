#include<bits/stdc++.h>
using namespace std;

void optimize() {
    int n; cin >> n;
   

    int set1 = n << 4;cout<<n;
    int set2 = n >> 4;cout<<n;

    int x = int(set1 | set2);

    cout << x;
}
int main() {
    // string str; cin >> str;
    // int n = str.size();

    // for(int i=0;i<n/2;i++) {
    //     swap(str[i], str[(n/2)+i]) ;
    // }
    // cout << str << endl;
    optimize();
}