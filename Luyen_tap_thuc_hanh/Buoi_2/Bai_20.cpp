#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e7 + 5;
void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int tcs(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        sum += (s[i] - '0');
    }
    return sum;
}

int main()
{
    faster();
    string s;
    cin >> s;
    int cnt = 0;
    while (tcs(s) >= 10)
    {
        s = to_string(tcs(s));
        ++cnt;
    }
    if (s.size() > 1)
        ++cnt;
    cout << cnt;
    return 0;
}