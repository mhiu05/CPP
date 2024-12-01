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
    ll n, d;
    cin >> n >> d;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
        cin >> v[i];
    ll ans = 0;
    for (ll i = 1; i < n; ++i)
    {
        if (v[i] <= v[i - 1])
        {
            ll x = (v[i - 1] - v[i]) / d + 1;
            ans += x;
            v[i] = v[i] + d * x;
        }
    }
    cout << ans;
    return 0;
}