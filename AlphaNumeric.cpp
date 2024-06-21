#include<bits/stdc++.h>
using namespace std;

void reverse(int);
void special(int n);
void reverse(int n) {
    for(int i=0;i<n/2;i++) {
        cout << i+1 << "\t";
        if((i+1)%2 == 0)
            cout << (char)(95+i+1) << "\t";
        else
            cout << (char)(97+i+1) << "\t";
    }
}
void special(int n) {
    for(int i=0;i<n;i = i+3) {
        cout << i+1 << " ";
        if(i%2 == 0) {
            cout << (char)(97+i+1) << " ";
            cout << "?" << " ";
        } else {
            cout << (char)(65+i+1) << " ";
            cout << "!" << " ";
        }
    }
}
int main() {
    int n;
    cin >> n;
    // for(int i=0;i<n/2;i++) {
    //     cout << i+1 << "\t";
    //     cout << (char)(97+i) << "\t";
    // }
    // reverse(n);
    special(n);
}