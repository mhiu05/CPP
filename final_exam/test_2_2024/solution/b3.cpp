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

int n, m, a[105][105], b[105][105];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void loang(int i, int j, int &sum)
{
    int cnt = 0;
    a[i][j] = 0;
    for (int k = 0; k < 4; ++k)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && j1 >= 0 && j1 < m && i1 < n && b[i1][j1] == 1)
        {
            ++cnt;
        }
    }
    sum += 4 - cnt;
    for (int k = 0; k < 4; ++k)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && j1 >= 0 && j1 < m && i1 < n && a[i1][j1] == 1)
        {
            loang(i1, j1, sum);
        }
    }
}

int main()
{
    faster();
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    int max_ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j])
            {
                int sum = 0;
                loang(i, j, sum);
                max_ans = max(max_ans, sum);
            }
        }
    }
    cout << max_ans;
    return 0;
}