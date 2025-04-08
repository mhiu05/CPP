#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

struct tg
{
    int h, m, s, time;
};

void nhap(tg a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].h >> a[i].m >> a[i].s;
        a[i].time = a[i].h * 3600 + a[i].m * 60 + a[i].s;
    }
}

void in(tg a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
    }
}

int cmp(tg a, tg b)
{
    return a.time < b.time;
}

int main()
{
    faster();
    int n;
    cin >> n;
    tg a[n];
    nhap(a, n);
    sort(a, a + n, cmp);
    in(a, n);
    return 0;
}