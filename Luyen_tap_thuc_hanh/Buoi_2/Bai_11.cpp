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
        int n;
        cin >> n;
        set<int> se;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            se.insert(x);
        }
        if (se.size() < 2)
            cout << -1 << endl;
        else
        {
            int cnt = 0;
            for (auto x : se)
            {
                cout << x << " ";
                ++cnt;
                if (cnt == 2)
                    break;
            }
        }
        cout << endl;
    }
    return 0;
}