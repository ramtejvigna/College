#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(string s, int left, int right) {
    int L = left, R = right;
    while (L >= 0 && R < s.size() && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
}

void checkLongest(string s) {
    int n = s.size();
    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        int len1 = checkPalindrome(s, i, i);
        int len2 = checkPalindrome(s, i, i + 1);

        int len = max(len1, len2);
        maxLen = max(maxLen, len);
    }

    cout << maxLen << endl;
}
int main() {
    string s; cin >> s;
    checkLongest(s);
    return 0;
}