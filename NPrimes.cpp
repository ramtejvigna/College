#include<bits/stdc++.h>
using namespace std;

int checkPrime(int);

int main() {
    int n;
    cin >> n;
    int index=0;
    for(int i=n;i>=2;i--) {
        int result = checkPrime(i);
        if(result == 1) {
            index++;
        }
    }
    
    int arr[index];
    index=0;
    for(int i=n;i>=2;i--) {
        int result = checkPrime(i);
        if(result == 1) {
            arr[index++] = i;
        }
    }
    for(int i : arr) {
        cout << i << " ";
    }
}
int checkPrime(int n) {
    for(int i=2;i<n;i++) {
        if(n%i == 0)
            return -1;
    }
    return 1;
}