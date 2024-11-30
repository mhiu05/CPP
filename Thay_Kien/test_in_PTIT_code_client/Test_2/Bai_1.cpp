#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1000005;

int prime[1000005];
void sieve()
{
    for (int i = 0; i <= 1000000; ++i)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(1000000); ++i)
    {
        for (int j = i * i; j <= 1000000; j += i)
        {
            prime[j] = 0;
        }
    }
}

int tcs(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    faster();
    sieve();
    int n;
    cin >> n;
    ll sum = 0;
    // for (int i = 2; i <= n; ++i)
    // {
    //     if (prime[i])
    //         cout << i << " ";
    // }
    // cout << endl;
    for (int i = 2; i <= n; ++i)
    {
        if (prime[i] && tcs(i) % 2 == 0)
            sum += 1ll * i;
    }
    cout << sum;
    return 0;
}