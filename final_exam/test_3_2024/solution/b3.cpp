#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e6 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    faster();
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    int dp[n][n];
    for (int i = 0; i < n; ++i)
    {
        dp[i][0] = a[i][0];
    }
    for (int j = 1; j < n; ++j)
    {
        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                dp[i][j] = max(dp[i][j - 1] + a[i][j], dp[i + 1][j - 1] + a[i][j]);
            }
            else if (i == n - 1)
            {
                dp[i][j] = max(dp[i][j - 1] + a[i][j], dp[i - 1][j - 1] + a[i][j]);
            }
            else
            {
                dp[i][j] = max({dp[i][j - 1] + a[i][j], dp[i + 1][j - 1] + a[i][j], dp[i - 1][j - 1] + a[i][j]});
            }
        }
    }
    int max_ans = 0;
    for (int i = 0; i < n; ++i)
    {
        max_ans = max(max_ans, dp[i][n - 1]);
    }
    cout << max_ans;
    return 0;
}