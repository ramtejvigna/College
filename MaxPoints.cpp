#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    vector<int> maxProduct;
    int sum=0;

    for(int i=0;i<n;i++) 
        cin >> arr[i];
    while(arr.size() > 2) {
        int max = INT_MIN;
        int maxIndex = -1;
        for(int i=1;i<arr.size()-1;i++) {
            int product = arr[i-1] * arr[i] * arr[i+1];
            if(product > max) {
                max = product;
                maxIndex = i;
            }
        }
        maxProduct.push_back(max);
        arr.erase(arr.begin()+maxIndex);
    }
    maxProduct.push_back(arr[0]*arr[1]);
    arr.clear();
    for(int i=0;i<maxProduct.size();i++) {
        cout << maxProduct[i] << " ";
        sum += maxProduct[i];
    }
    cout << endl;
    cout << sum;
}