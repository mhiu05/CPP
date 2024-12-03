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
    int n;
    cin >> n;
    ll F[n + 1];
    F[1] = 1;
    F[2] = 1;
    for (int i = 3; i <= n; ++i)
    {
        F[i] = 2 * F[i - 1] + 3 * F[i - 2];
        F[i] %= mod;
    }
    cout << F[n];
    return 0;
}