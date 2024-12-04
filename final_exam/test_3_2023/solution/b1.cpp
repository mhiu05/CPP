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
    ll n, x;
    cin >> n >> x;
    if (x == 1)
    {
        cout << 1;
        return 0;
    }
    ll cnt = 0;
    for (ll i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
        {
            if (i <= n && (x / i) <= n)
            {
                cnt += 1;
                if (i * i != x)
                    cnt += 1;
            }
        }
    }
    if (x <= n)
        cnt += 2;
    cout << cnt;
    return 0;
}