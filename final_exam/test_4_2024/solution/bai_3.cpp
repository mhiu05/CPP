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

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int a[1000][1000];
int n, s, t;
int cnt = 1;

void loang(int i, int j)
{
    a[i][j] = 1;
    for (int k = 0; k < 4; ++k)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 0)
        {
            ++cnt;
            loang(i1, j1);
        }
    }
}

int main()
{
    faster();
    cin >> n >> s >> t;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    loang(s - 1, t - 1);
    cout << cnt;
    return 0;
}