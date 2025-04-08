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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        for (int i = k; i < n; ++i)
            cout << a[i] << " ";
        for (int i = 0; i < k; ++i)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}