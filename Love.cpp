#include<bits/stdc++.h>
using namespace std;

void reverseTriangleLove(int n) {
    for(int i=1;i<=2*n;i++) {
        for(int j=1;j<=i;j++) {
            cout << " ";
        }
        for(int j=0;j<2*n-i;j++) {
            cout << " *";
        }
        cout << endl;
    }
}

void love(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++) {
            cout << " ";
        }
        for(int j=1;j<=i;j++) {
            cout << " *";
        }
        for(int j=1;j<=2*(n-i);j++) {
            cout << " ";
        }
        for(int j=1;j<=i;j++) {
            cout << " *";
        }
        for(int j=1;j<=n-i;j++) {
            cout << " ";
        }
        cout << endl;
    }
    reverseTriangleLove(n);
}

int main() {
    int n;
    cin >> n;
    love(n);
}