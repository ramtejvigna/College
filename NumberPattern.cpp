#include <bits/stdc++.h>
using namespace std;

void SquareNumbered(int n)
{
    for (int i = 0; i < 2 * n-1; i++)
    {
        for (int j = 0; j < 2 * n-1; j++)
        {
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;

            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }
        cout << endl;
    }
}
void AlphaRightTriangle(int n) {
    int start = 90;

    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout << (char)start << " ";
            start--;
        }
        cout << endl;
    }
}
void AlternateAlpha(int n) {
    char first = 'A';
    char second = 'Z';
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            if(i%2 == 0) {
                cout << first << " ";
                first++;
            } else {
                cout << second << " ";
                second--;
            }
        }
        cout << endl;
    }
}
void NumericTriangle(int n) {
    for(int i=0;i<n;i++) {
        int num = i+1;
        for(int j=0;j<2*i+1;j++) {
            if(j<=i/2) {
                cout << num << " ";
                num++;
            } else {
                cout << num << " ";
                num--;
            }
        }
        cout << endl;
    }
}
void AlphaReverse(int n) {
    int start = 90-n+1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<2*(n-i)-1;j++) {
            cout << (char)start << " ";
            if(j < (n-i-1)) {
                start++;
            } else {
                start--;
            }
        }
        start -= n-i-2;
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    // AlternateAlpha(n);
    // AlphaRightTriangle(n);
    // SquareNumbered(n);
    // NumericTriangle(n);
    AlphaReverse(n);
}