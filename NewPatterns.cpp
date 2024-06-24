#include<bits/stdc++.h>
using namespace std;

void SquareDiagonal(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "* ";
            }
            else if(j == (n/2) || i == (n/2)) {
                cout << "* ";
            }
            else if(i == j || i == (n-j)-1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n; cin >> n;

    SquareDiagonal(n);
}