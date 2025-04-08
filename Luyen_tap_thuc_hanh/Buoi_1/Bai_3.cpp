#include <bits/stdc++.h>
#define endl "\n"
#define fi first
#define sc second

using namespace std;

using ll = long long;

const int MAXN = 1e6 + 1;
const int mod = 1e9 + 7;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int snt(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int prime[MAXN];
void sieve()
{
    for (int i = 0; i <= 1000000; ++i)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; ++i)
    {
        for (int j = i * i; j <= 1000000; j += i)
        {
            prime[j] = 0;
        }
    }
}

int cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    faster();
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; ++i)
    {
        if (m <= v[i].sc)
        {
            cout << ans + m * v[i].fi;
            return 0;
        }
        else
        {
            ans += v[i].fi * v[i].sc;
            m -= v[i].sc;
        }
    }
    return 0;
}
