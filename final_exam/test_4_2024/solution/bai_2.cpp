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

int cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}

void solve(vector<pair<int, int>> v)
{
    sort(v.begin(), v.end(), cmp);
    int last_end = -1;
    int cnt = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].first >= last_end)
        {
            last_end = v[i].second;
            ++cnt;
        }
    }
    cout << v.size() - cnt;
}

int main()
{
    faster();
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    solve(v);
    return 0;
}