#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i<= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n; cin >> n;
    vector<int> v1;
    for(int i=2;i<=n;i++) {
        if(checkPrime(i)) {
            v1.push_back(i);
        }
    }
    for(auto it : v1) {
        cout << it << " ";
    }
}