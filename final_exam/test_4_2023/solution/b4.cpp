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

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    faster();

    unordered_map<string, int> mp;
    string s;
    while (getline(cin, s))
    {
        string s1 = s.substr(0, s.find("-") - 1);
        int idx;
        for (int i = 0; i < s1.size(); ++i)
        {
            if (s1[i] == ' ')
            {
                idx = i;
            }
        }
        string name1 = s1.substr(0, idx);
        int goal1 = stoi(s1.substr(idx + 1));
        mp[name1] += goal1;

        string s2 = s.substr(s.find("-") + 2);
        string name2 = s2.substr(s2.find(" ") + 1);
        int goal2 = stoi(s2.substr(0, s2.find(" ")));
        mp[name2] += goal2;
    }
    vector<pair<string, int>> v;
    for (auto it : mp)
    {
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}