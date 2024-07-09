#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
        return true;
}

int main() {
    int num1; cin >> num1;
    int num2; cin >> num2;
    int flag=0;
    for(int i=2;i<num2;i++) {
        if(checkPrime(i)) {
            if(num1 + i == num2) {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1) {
        cout << "True";
    } else {
        cout << "False";
    }
}