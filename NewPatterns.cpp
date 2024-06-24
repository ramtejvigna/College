#include <bits/stdc++.h>
using namespace std;

void SquareDiagonal(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else if (j == (n / 2) || i == (n / 2))
            {
                cout << "* ";
            }
            else if (i == j || i == (n - j) - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void Rhombus(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "  ";    
        }
        for(int j=0;j<=2*i;j++) {
            if(j == 0 || j == 2*i || j == i || i == n-1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for(int i=n;i>0;i--) {
        for(int j=0;j<n-i+1;j++) {
            cout << "  ";
        }
        for(int j=0;j<2*i;j++) {
            if(j == 0 || j == i-1 || j == 2*i-2) 
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    // SquareDiagonal(n);
    Rhombus(n);
}