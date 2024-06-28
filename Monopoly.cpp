#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int max = INT_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i]>max) max=arr[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == max) continue;
        else {
            sum += arr[i];
        }
    }
    if(sum < max) {
        cout << "Monopoly exists -> " << max;
    } else {
        cout << "No monopoly exists";
    }
}