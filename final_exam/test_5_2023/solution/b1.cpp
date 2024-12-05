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

int tsnt(int n, int k)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                ++cnt;
                if (cnt == k)
                    return i;
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        ++cnt;
        if (cnt == k)
            return n;
    }
    return -1;
}

int main()
{
    faster();
    int n, k;
    cin >> n >> k;
    cout << tsnt(n, k);
    return 0;
}