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
    ll n, m, k;
    cin >> n >> m >> k;
    ll ans = 1;
    ll x = 1ll * pow(10, k);
    for (int i = 1; i <= m; ++i)
    {
        ans *= n;
        ans %= x;
    }
    cout << ans;
    return 0;
}