#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int firstMax = arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]>firstMax) {
            firstMax = arr[i];
        }
    }
    
    int secondMax = -1;
    for(int i=0;i<n;i++) {
        if(arr[i]>secondMax && arr[i] < firstMax) {
            secondMax = arr[i];
        }
    }
    int thirdMax = -1;
    for(int i=0;i<n;i++) {
        if(arr[i] > thirdMax && arr[i] < secondMax) {
            thirdMax = arr[i];
        }
    }
    cout << thirdMax;
}