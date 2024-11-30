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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> se1, se2, se;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            se.insert(x);
            se1.insert(x);
        }
        for (int i = 1; i <= m; ++i)
        {
            int x;
            cin >> x;
            se.insert(x);
            se2.insert(x);
        }
        for (auto x : se)
            cout << x << " ";
        cout << endl;
        for (int x : se1)
        {
            if (se2.count(x))
                cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}