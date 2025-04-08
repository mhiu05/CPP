#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e7 + 5;
void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    faster();
    ll n, k;
    cin >> n >> k;
    set<ll> se;
    int check = 0;
    for (ll i = 1; i <= k; ++i)
    {

        if (se.count(n % i))
            break;
        else
        {
            se.insert(n % i);
            if (i == k)
                check = 1;
        }
    }
    if (check)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}