#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {210,190,30,40,80,60,10};
    int n = 7;
    sort(arr, arr+n);
    int second_max = INT_MIN;
    int max = INT_MIN;

    for(auto x : arr) {
        if(x > max) max = x;
    }
    for(auto x : arr) {
        if(x > second_max && x < max) {
            second_max = x;
        }
    }
    for(int i=0;i<n-1;i++) {
        int sum = 0;
        for(int j=i;j<n;j++) {
            if(arr[j] == second_max) {
                continue;
            }
            sum += arr[j];
            cout << arr[j] << " ";
        }
        if(sum >= 300) {
            cout << "   -----> Government can be formed " << endl;
        }
    }
}