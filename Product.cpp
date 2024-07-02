#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v1;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
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