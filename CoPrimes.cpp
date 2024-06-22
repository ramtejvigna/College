#include<bits/stdc++.h>
using namespace std;

bool coPrime(int, int);

bool coPrime(int i, int j) {
    if (__gcd(i, j) == 1)
        return true;
    
    return false;
}

int main() {
    int n; cin >> n;
    vector<vector<int>> vect;
    for(int i=1;i<n;i++) {
        for(int j=2;j<=n;j++) {
            if(coPrime(i,j)) {
                // Dont push if the vector already contains those elements
                vect.push_back({i,j});
            }
        }
    }
    for(auto it:vect){
        cout<<it[0]<<" "<<it[1]<<endl;
    }
}