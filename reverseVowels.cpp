#include<bits/stdc++.h>
using namespace std;

bool vowels(char s, char k) {
    if((s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    && (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u')) 
        return true;
    return false;
}
int main() {
    string s; cin >> s;
    int n = s.size();
    int k=n-1;
    for(int i=0;i<n;i++) {
        if(vowels(s[i],s[k])) {
            swap(s[i],s[k]);
        } else {
            k--;
        }
    }
    cout << s << endl;
}