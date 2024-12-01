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

int check(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        res = 2 * res + (s[i] - '0');
        res %= 5;
    }
    if (res % 5 == 0)
        return 1;
    return 0;
}

int main()
{
    faster();
    string s;
    cin >> s;
    if (check(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}