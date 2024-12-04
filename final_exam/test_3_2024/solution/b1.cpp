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

int prime[MAXN];
void sieve()
{
    for (int i = 0; i < MAXN; ++i)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < MAXN; ++i)
    {
        for (int j = i * i; j < MAXN; j += i)
        {
            prime[j] = 0;
        }
    }
}

int check(int n)
{
    if (!prime[n])
        return 0;
    while (n)
    {
        n /= 10;
        if (!prime[n] && n > 0)
            return 0;
    }
    return 1;
}

int main()
{
    faster();
    sieve();
    int a, b;
    cin >> a >> b;
    int Check = 0;
    for (int i = a; i <= b; ++i)
    {
        if (check(i))
        {
            cout << i << " ";
            Check = 1;
        }
    }
    if (!Check)
        cout << "28tech";
    return 0;
}