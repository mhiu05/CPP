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
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }
    int dp[n][m];
    dp[0][0] = a[0][0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i == 0 && j == 0)
                continue;
            if (i == 0)
            {
                dp[i][j] = dp[i][j - 1] + a[i][j];
            }
            else if (j == 0)
            {
                dp[i][j] = dp[i - 1][j] + a[i][j];
            }
            else
            {
                dp[i][j] = max({dp[i - 1][j - 1] + a[i][j], dp[i - 1][j] + a[i][j], dp[i][j - 1] + a[i][j]});
            }
        }
    }
    cout << dp[n - 1][m - 1];
    return 0;
}