#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

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
    map<int, int> mp;
    for (int j = 0; j < n; ++j)
    {
        mp[a[0][j]] = 1;
    }
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (mp[a[i][j]] == i)
                mp[a[i][j]] = i + 1;
        }
    }
    int check = 0;
    for (auto it : mp)
    {
        if (it.second == n)
        {
            check = 1;
            cout << it.first << " ";
        }
    }
    if (!check)
        cout << "NOT FOUND";
    return 0;
}