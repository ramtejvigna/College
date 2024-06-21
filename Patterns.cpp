#include<bits/stdc++.h>
using namespace std;

void triangle(int n) {
    for(int i=n;i>0;i--) {
        for(int j=1;j<i;j++) {
            cout << " ";
        }
        for(int j=0;j<=n-i;j++) {
            cout << " *";
        }
        cout << endl;
    }
}
void reverseTriangle(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << " ";
        }
        for(int j=0;j<n-i;j++) {
            cout << " *";
        }
        cout << endl;
    }
}
void star(int n) {
    for(int i=0;i<n/2;i++) {
        for(int j=0;j<n-1-i;j++) {
            cout << " ";
        }
        cout << " ";
        for(int j=0;j<i;j++) {
            cout << " *";
        }
        cout << endl;
    }
    for(int i=1;i<n/2+1;i++) {
        for(int j=1;j<=i;j++) {
            cout << " ";
        }
        for(int j=0;j<n-i;j++) {
            cout << " *";
        }
        cout << endl;
    }
    for(int i=n/2;i>1;i--) {
        for(int j=1;j<i;j++) {
            cout << " ";
        }
        for(int j=0;j<=n-i;j++) {
            cout << " *";
        }
        cout << endl;
    }
    for(int i=n/2-1;i>=0;i--) {
        for(int j=0;j<n-1-i;j++) {
            cout << " ";
        }
        cout << " ";
        for(int j=0;j<i;j++) {
            cout << " *";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n;j++) {
    //         if(i == 0 || j == 0 || i == n-1 || j == n-1) {
    //             cout << "* ";
    //         }
    //         else 
    //             cout << "  ";
    //     }
    //     cout << "\n";
    // }
    // triangle(n);
    // reverseTriangle(n);
    // love(n);
    star(n);
}