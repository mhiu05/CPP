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
    char a[105][105];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    string F[105][105];
    if (a[1][1] == '1')
        F[1][1] = "1";
    else
        F[1][1] = "0";
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == 1 && j == 1)
                continue;
            if (i == 1)
            {
                F[i][j] = F[i][j - 1] + a[i][j];
            }
            else if (j == 1)
            {
                F[i][j] = F[i - 1][j] + a[i][j];
            }
            else
                F[i][j] = max(F[i - 1][j] + a[i][j], F[i][j - 1] + a[i][j]);
        }
    }
    string s = F[n][n];
    while (s.size() > 1 && s[0] == '0')
        s.erase(0, 1);
    while (s.size() % 4 != 0)
        s = "0" + s;

    string ans = "";

    for (int i = 0; i < s.size(); i += 4)
    {
        int x = 8 * (s[i] - '0') + 4 * (s[i + 1] - '0') + 2 * (s[i + 2] - '0') + (s[i + 3] - '0');
        if (x < 10)
        {
            ans += to_string(x);
        }
        else if (x == 10)
            ans += 'A';
        else if (x == 11)
            ans += 'B';
        else if (x == 12)
            ans += 'C';
        else if (x == 13)
            ans += 'D';
        else if (x == 14)
            ans += 'E';
        else
            ans += 'F';
    }
    cout << ans;
    return 0;
}