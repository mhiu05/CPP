#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

int check1(int a[], int n)
{
    for (int i = 3; i <= n; ++i)
    {
        if (a[i] == 6 && a[i - 1] == 6 && a[i - 2] == 6)
            return 0;
    }
    return 1;
}

int check2(int a[], int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += a[i];
    }
    if (sum % 3 != 0)
        return 1;
    return 0;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n; ++i)
        {
            a[i] = 6;
        }
        int ok = 1;
        while (ok)
        {
            if (check1(a, n) && check2(a, n))
            {
                for (int i = 1; i <= n; ++i)
                {
                    cout << a[i];
                }
                cout << " ";
            }
            int i = n;
            while (i > 0 && a[i] == 8)
            {
                a[i] = 6;
                --i;
            }
            if (i == 0)
                ok = 0;
            else
            {
                a[i] = 8;
            }
        }
        cout << endl;
    }
    return 0;
}