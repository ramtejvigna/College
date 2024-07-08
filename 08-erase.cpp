#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;

    unordered_map<char, int> mp;
    for(int i=0;i<str.size();i++) {
        mp[str[i]]++;
    }
    int cnt = str.size();
    while(cnt>0) {
        if(mp.find(str[cnt]) != mp.end()) {
            str.erase(str.begin()+0);
        }
        cnt--;
        cout << str << endl;
    }
}