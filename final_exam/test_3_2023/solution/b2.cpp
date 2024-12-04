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
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    unordered_map<ll, ll> mp;
    int max_len = 0, idx = -1;
    for (int i = 0; i < n; ++i)
    {
        sum += v[i];
        if (sum == 0)
        {
            max_len = i + 1;
            idx = 0;
        }
        if (mp.find(sum) != mp.end())
        {
            if (max_len < i - mp[sum])
            {
                idx = mp[sum] + 1;
                max_len = i - mp[sum];
            }
        }
        else
        {
            mp[sum] = i;
        }
    }
    if (idx == -1)
        cout << "NOT FOUND";
    else
    {
        for (int i = 0; i < max_len; ++i)
        {
            cout << v[idx + i] << " ";
        }
    }
    return 0;
}