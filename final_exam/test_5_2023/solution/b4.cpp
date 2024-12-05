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
    string s;
    cin >> s;
    int i = 1;
    int qty = 1;
    while (i != s.size())
    {
        if (s[i] != s[i - 1])
        {
            cout << s[i - 1] << qty;
            qty = 1;
        }
        else
        {
            ++qty;
        }
        ++i;
    }
    cout << s[s.size() - 1] << qty;
    return 0;
}