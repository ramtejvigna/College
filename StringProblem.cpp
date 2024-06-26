#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n; cin >> n;
    int cnt = 0;
    int s = n.size();
    string result = "";

    while(cnt < s) {
        if(s%2 != 0) {
            if(cnt%2 == 0 && cnt != 0 && cnt < s-1) {
                result += ",";
                result += n[cnt];
            } else {
                result += n[cnt];
            }
        } 
        else if(s%2 == 0) {
            if(cnt%2 != 0 && cnt != 0 && cnt < s-1) {
                result += ",";
                result += n[cnt];
            } else {
                result += n[cnt];
            }
        }
        cnt++;
    }
    cout << result << endl;
}