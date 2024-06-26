#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, str;
    getline(cin, s);
    sort(s.begin(), s.end());

    for(auto x : s) {
        if(x != ' ') {
            str += x;
        }
    }
    cout << str << endl;
    int n = str.size();
    int len=0,i=0,j=0;
    while(i<n) {
        if(str[i] != str[j]) {
            i++;
            len = max(len, j-i+1);
            cout << len << endl;
        }
        else {
            j++;
        }
    }

    cout << "Length : " << len << endl;
}