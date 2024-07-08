#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    int cnt = 0;
    int n = str.size();
    char arr[][3] = {{'S','A','T'},{'I','G','R'},{'T','N','E'}};
    map<char, int> mp;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            mp[arr[i][j]]++;
        }
    }

    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if(str.find(it->first) != string::npos) {
            cnt++;
        }
    }
    if(cnt == n) {
        cout << "True";
    } else {
        cout << "False";
    }
}