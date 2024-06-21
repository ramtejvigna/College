#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, n; cin >> n >> num;

    if(num == 1) {
        for(int i=0;i<n/2;i++) {
            cout << i*2 + 1 << "\t";
            cout << 0 << "\t";
        }
    }
    if(num == 0) {
        for(int i=0;i<n/2;i++) {
            cout << 0 << "\t";
            cout << i*2 << "\t";
        }
    }
}