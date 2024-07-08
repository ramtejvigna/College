#include<bits/stdc++.h>
using namespace std;

void swapElementsWithSameCount(int arr[], int n) {
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i < n; ++i) {
        frequencyMap[arr[i]]++;
    }

    for (int i = 0; i < n; ++i) {
        for(int j=i+1;j<n;j++) {
            if(frequencyMap[arr[i]] == frequencyMap[arr[j]]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {6, 6,4, 8,8,1,1,2, 9,3, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    swapElementsWithSameCount(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}
