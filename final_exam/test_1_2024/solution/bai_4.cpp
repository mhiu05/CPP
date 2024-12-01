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

map<int, ll> mp;

vector<int> spf(MAXN, 1);

int main()
{
    faster();
    string a[25];
    a[0] = "{}";
    for (int i = 1; i <= 20; ++i)
    {
        string tmp = "";
        for (int j = 0; j < i; ++j)
        {
            tmp = tmp + a[j] + ',';
        }
        tmp.pop_back();
        tmp = "{" + tmp + "}";
        a[i] = tmp;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        char c;
        cin >> x >> c >> y;
        cout << a[x] << "+" << a[y] << "=" << a[x + y] << endl;
        ;
    }
    return 0;
}