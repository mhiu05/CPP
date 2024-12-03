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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        auto it1 = lower_bound(a + i + 1, a + n, a[i] + k);
        auto it2 = upper_bound(a + i + 1, a + n, a[i] + k);
        ans += it2 - it1;
    }
    cout << ans;
    return 0;
}