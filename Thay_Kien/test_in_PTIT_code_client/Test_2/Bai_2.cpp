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
const int MAXN = 100005;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        while (v.size() > 0)
        {
            auto it1 = max_element(v.begin(), v.end());
            cout << *it1 << " ";
            v.erase(it1);
            if (v.size() > 0)
            {
                auto it2 = min_element(v.begin(), v.end());
                cout << *it2 << " ";
                v.erase(it2);
            }
        }
        cout << endl;
    }
    return 0;
}