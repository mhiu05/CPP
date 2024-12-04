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

int n;
int s, t, u, v;
int a[105][105];

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

void loang(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; ++k)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && j1 >= 0 && i1 < n && j1 < n && a[i1][j1] == 1)
        {
            loang(i1, j1);
        }
    }
}

int main()
{
    faster();
    cin >> n;
    cin >> s >> t >> u >> v;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    loang(s - 1, t - 1);

    if (a[u - 1][v - 1] == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}