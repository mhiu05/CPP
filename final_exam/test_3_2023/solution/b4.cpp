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

int cmp(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main()
{
    faster();
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (!isdigit(s[i]))
            s[i] = ' ';
    }
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
    {
        while (tmp[0] == '0' && tmp.size() > 1)
        {
            tmp.erase(0, 1);
        }
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[v.size() - 1];
    return 0;
}