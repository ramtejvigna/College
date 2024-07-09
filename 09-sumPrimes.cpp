#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i<= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int calculate(vector<int> &v1, int n) {
    int sum = 0;
    int temp =0;
    for(int i=n/2;i>=2;i--) {
        if(checkPrime(i)) {
            sum += i;
            temp = i;
            if(sum > n) {
                sum -= i;
                temp = 0;
            }
            if(temp != 0) {
                v1.push_back(temp);
            } 
        }
    }
    return sum;
}
int main() {
    int n; cin >> n;
    vector<int> v1;
    int sum = calculate(v1,n);
    if(n > sum) {
        if(checkPrime(n-sum)) {
            v1.push_back(n-sum);
        } else {
            calculate(v1,n-sum);
        }
    }
    for(auto it : v1) {
        cout << it << " ";
    }
}