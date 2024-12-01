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
    int min_ans = 1e9;
    for (int i = k - 1; i < n; ++i)
    {
        min_ans = min(min_ans, a[i] - a[i - k + 1]);
    }
    cout << min_ans;
    return 0;
}