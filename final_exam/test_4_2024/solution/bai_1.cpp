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

void tsnt(ll n, map<ll, ll> &mp)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                mp[i]++;
                n /= i;
            }
        }
    }
    if (n != 1)
        mp[n]++;
}

int check_exist_0(ll a[], ll n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0)
        {
            return 1;
        }
    }
    return 0;
}

int check(map<ll, ll> mp)
{
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
            return 0;
    }
    return 1;
}

int main()
{
    faster();
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for (ll &x : a)
        cin >> x;
    for (int x : a)
        tsnt(x, mp);
    if (check_exist_0(a, n))
    {
        cout << "28tech " << 0;
        return 0;
    }
    else
    {
        if (check(mp))
        {
            cout << "28tech ";
            ll ans = 1;
            for (auto it : mp)
            {
                for (ll i = 1; i <= it.second / 2; ++i)
                {
                    ans *= it.first;
                    ans %= mod;
                }
            }
            cout << ans;
            return 0;
        }
        else
        {
            cout << "29tech";
            return 0;
        }
    }
    return 0;
}