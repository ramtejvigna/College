#include<bits/stdc++.h>
using namespace std;

void betterOffer() {
    double percent1; cin >> percent1;
    percent1 /= 100;
    double percent2; cin >> percent2;
    percent2 /= 100;

    double units1; cin >> units1;
    double units2; cin >> units2;

    double profit1 = percent1*units1;
    double profit2 = percent2*units2;

    if(profit1 > profit2) cout << "Choosing A is better which has profit of " << profit1;
    else cout << "Choosing B is better which has profit of " << profit2;
}
void days() {
    string s[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int d; cin >> d;
    int inc; cin >> inc;

    inc = inc%7;

    cout << s[d+inc-1];
}

int main() {
    // betterOffer();
    days();
}