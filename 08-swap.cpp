#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    map<int, int> mp;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    for(int i=0;i<n;i++) {
        mp[arr[i]]++;
    }

    // for(auto it = mp.begin(); it != mp.end(); ++it) {
    //     cout << it->first << " : " << it->second << endl;
    // }

    for(int i=0;i<n;i++) {
        cout << arr[i] << " : " << mp[arr[i]] << endl;
    }
    for(int i=0;i<) {

    }
}