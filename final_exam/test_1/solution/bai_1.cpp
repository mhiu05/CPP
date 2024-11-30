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

map<int, ll> mp;

vector<int> spf(MAXN);

void sieve()
{
    for (int i = 2; i <= MAXN; ++i)
    {
        spf[i] = i;
    }
    for (int i = 2; i * i <= MAXN; ++i)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= MAXN; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

void get_tsnt(int x)
{
    vector<int> v;
    while (x != 1)
    {
        mp[spf[x]]++;
        x /= spf[x];
    }
}

int main()
{
    faster();
    sieve();
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        get_tsnt(a[i]);
    }
    ll ans = 1;
    for (auto it : mp)
    {
        ans *= (it.second + 1);
        ans %= mod;
    }
    cout << ans;
    return 0;
}