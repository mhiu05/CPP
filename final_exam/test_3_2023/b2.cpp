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
    ll F[n];
    int idx = -1;
    int longest = 0, idx = -1;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    F[0] = v[0];
    if (F[0] == 0)
    {
        longest = 1;
        idx = 0;
    }
    for (int i = 1; i < n; ++i)
    {
        F[i] = F[i - 1] + v[i];
        if (F[i] == 0)
        {
            longest = i + 1;
            idx = 0;
        }
    }
    return 0;
}