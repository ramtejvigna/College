#include <bits/stdc++.h>
using namespace std;

void fibonacci()
{
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    int c = 1;
    int sum = 0;
    cout << a << " " << b << " " << c << " ";
    while (sum < n)
    {
        sum = a + b + c;
        cout << sum << " ";
        a = b;
        b = c;
        c = sum;
    }
}

void candyWrapper()
{
    int n;
    cin >> n;
    int totalWrapper = n;
    int sum = n;
    int rem = 0;

    while (totalWrapper >= 2)
    {
        totalWrapper = totalWrapper + rem;
        rem = totalWrapper % 3;
        totalWrapper /= 3;
        cout << totalWrapper << endl;
        sum += totalWrapper;
    }
    // if(rem == 1) {
    //     sum += totalWrapper;
    // }
    cout << sum << endl;
}

int findMaxSum(vector<int> arr, int N)
{
    int dp[N][2];
    if (N == 1)
    {
        return arr[0];
    }

    dp[0][0] = 0;
    dp[0][1] = arr[0];

    for (int i = 1; i < N; i++)
    {
        dp[i][1] = dp[i - 1][0] + arr[i];
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][0]);
    }

    return max(dp[N - 1][0], dp[N - 1][1]);
}
int main()
{
    // fibonacci();
     candyWrapper();
    // vector<int> v1 = {3,9,1,1,8,3,5};
    // cout << findMaxSum(v1, v1.size()) << endl;
}