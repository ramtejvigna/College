#include <bits/stdc++.h>
using namespace std;

int main() {
    string n = "rid rise rinse";
    string com;
    vector<vector<char>> word(3);
    int cnt = 0;
    for (auto x : n) {
        if (x == ' ') 
            cnt++;
        else 
            word[cnt].push_back(x);
    }

    int mini=INT_MAX;

    for(int i=0;i<word.size();i++) {
        int size = word[i].size();
        mini = min(mini, size);
    }

    for (int j = 0; j < mini; j++) {
        char current = word[0][j];
        bool common = true;
        for (int i = 1; i < word.size(); i++) {
            if (word[i][j] != current) {
                common = false;
                break;
            }
        }
        if (common) {
            com += current;
        } else {
            break;
        }
    }
    cout << com << endl;
}
