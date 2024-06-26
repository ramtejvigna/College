#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "ramtej ri yat";
    int count; cin >> count;
    int n = s.size();

    vector<string> arr;  // Use a vector to dynamically hold the words
    string word = "";

    for (auto x : s) {
        if (x == ' ') {
            arr.push_back(word);
            word = "";
        } else {
            word += x;
        }
    }
    arr.push_back(word); // Push the last word

    for (int j = 0; j < arr.size(); j++) {
        if (arr[j].size() == count) {
            sort(arr[j].begin(), arr[j].end());
        } else if (arr[j].size() > count) { 
            reverse(arr[j].begin(), arr[j].end());
        }
    }

    for(int j=0;j<arr.size();j++) {
        cout << arr[j] << " ";
    }
    return 0;
}
