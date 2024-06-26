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
            cout << "Before " << arr[j] << endl;
            sort(arr[j].begin(), arr[j].end());
            cout << "After " << arr[j] << endl;
        } else if (arr[j].size() > count) {
            cout << "Before " << arr[j] << endl;  
            reverse(arr[j].begin(), arr[j].end());
            cout << "After " << arr[j] << endl;
        }
    }

    return 0;
}
