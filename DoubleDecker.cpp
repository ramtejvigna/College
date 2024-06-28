#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    if(n % 6 == 0) {
        cout << "Upper at position " << 3 << endl;
    }
    else if(n % 3 == 0) {
        cout << "Lower at positon " << 3 << endl;
    }
    else if(n%6 == 1) {
        cout << "Lower at position " << 1 << endl;
    }
    else if(n%6 == 4) {
        cout << "Upper at postion " << 1 << endl;
    }
    else if(n%6 == 5) {
        cout << "Upper at " << 2 << endl;
    }
    else if(n%6 == 2) {
        cout << "Upper at " << 2 << endl;
    }
}