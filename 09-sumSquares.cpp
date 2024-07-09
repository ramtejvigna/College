#include<bits/stdc++.h>
using namespace std;

int calculate(vector<int> &v1, int n) {
    int sum = 0;
    for(int i=sqrt(n);i>0;i--) {
        sum += i*i;
        int temp = i;
        if(n < sum) {
            sum -= i*i;
            temp = 0;
        }
        if(temp != 0) {
            v1.push_back(temp);
        } 
    }
    return sum;
}
int main() {
    int n; cin >> n;
    vector<int> v1;
    int sum = calculate(v1,n);
    if(n > sum) {
        sum = calculate(v1,n-sum);
    }
    for(auto it : v1) {
        cout << it << " ";
    }
}