#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int index; cin >> index;
    int start=97, tempIndex=index;
    int cnt=0;
    for(int i=0;i<n;i++) {
        if(tempIndex%index == 0 && cnt != 0 && (i%2 != 0)) {
            start += index/2 + 2;
            tempIndex = (n-i-1)/2 + 1;
        }
        if(i%2 == 0) {
            cout << i+1 << " ";
        }
        else {
            cnt++;
            char temp = (char)(start+tempIndex-1);
            cout << temp << " ";
            tempIndex--;
        }
    }
}