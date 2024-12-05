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
    int n, m;
    cin >> n >> m;
    multiset<int> a;
    vector<int> b(m);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; ++i)
        cin >> b[i];
    for (int i = 0; i < m; ++i)
    {
        if (a.size() == 0)
        {
            cout << -1 << endl;
            continue;
        }
        auto it = a.upper_bound(b[i]);
        if (it == a.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            --it;
            cout << *it << endl;
            a.erase(it);
        }
    }
    return 0;
}