#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(N) 
void optimize() {
    int n; cin >> n;
    vector<int> v1;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int prefixProduct = 1;
    for(int i=0;i<n;i++) {
        v1.push_back(prefixProduct);
        prefixProduct *= arr[i];
    }
    
    int suffixProduct = 1;
    for(int i=n-1;i>=0;i--) {
        v1[i] *= suffixProduct;
        suffixProduct *= arr[i];
    }

    for(auto it : v1) {
        cout << it << " ";
    }
}

int main() {
    int n; cin >> n;
    vector<int> v1;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    // Time complexity : O(n^2)
    for(int i=0;i<n;i++) {
        int pro = 1;
        for(int j=0;j<n;j++) {
            if(i!=j) {
                pro = pro * arr[j];
            }
        }
        v1.push_back(pro);
    }

    for(auto it : v1) {
        cout << it << " ";
    }
}