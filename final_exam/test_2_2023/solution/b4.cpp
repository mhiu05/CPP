#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        map<int, int> mp;
        while (ss >> tmp)
        {
            if (tmp == "+")
                continue;
            int x = tmp[0] - '0';
            int y = tmp[tmp.size() - 1] - '0';
            mp[y] += x;
        }
        int cnt = 0;
        for (auto it : mp)
        {
            ++cnt;
            cout << it.second << "x^" << it.first;
            if (cnt != mp.size())
                cout << " + ";
        }
        cout << endl;
    }
    return 0;
}