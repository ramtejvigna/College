#include<bits/stdc++.h>
using namespace std;

void optimize() {

    int n; cin >> n;
     // extVar in binary - 11111111

    int set1 = n << 4;   // Integer has 32 bits space
    set1 = set1 & 255;   // As Integer has 32 bits space, we have to perform AND operation with the 
                            // extVar and set1 to satisfy our 8 bits condition

    int set2 = n >> 4;
    set2 = set2 & 255;

    int x = set1 ^ set2;

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