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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i)
        {
            mp[s[i]]++;
        }
        int max_fre = 0;
        for (auto x : mp)
        {
            max_fre = max(max_fre, x.second);
        }
        if (max_fre <= (s.size() + 1) / 2)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}