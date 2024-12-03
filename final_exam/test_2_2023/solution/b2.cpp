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
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
        v[i] %= 28;
        mp[v[i]]++;
    }
    ll ans = 0;
    ans += mp[0] * (mp[0] - 1) / 2;
    for (int i = 1; i <= 13; ++i)
    {
        ans += mp[i] * mp[28 - i];
    }
    ans += mp[14] * (mp[14] - 1) / 2;
    cout << ans;
    return 0;
}