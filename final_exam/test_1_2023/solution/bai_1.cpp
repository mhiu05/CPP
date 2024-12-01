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
    if (n > 1)
        mp[n]++;
}

int main()
{
    faster();
    map<ll, ll> mp;
    ll n;
    cin >> n;
    tsnt(n, mp);
    ll max_ans = 0;
    for (auto it : mp)
    {
        if (max_ans < it.second)
        {
            max_ans = it.second;
        }
    }
    for (auto it : mp)
    {
        if (it.second == max_ans)
        {
            cout << it.first << " " << it.second;
            break;
        }
    }
    return 0;
}