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

void init(map<string, int> &mp)
{
    string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    cin >> s1 >> n1;
    cin >> s2 >> n2;
    cin >> s3 >> n3;
    cin >> s4 >> n4;
    cin >> s5 >> n5;
    cin >> s6 >> n6;
    cin >> s7 >> n7;
    cin >> s8 >> n8;
    cin >> s9 >> n9;
    cin >> s10 >> n10;
    mp[s1] = n1;
    mp[s2] = n2;
    mp[s3] = n3;
    mp[s4] = n4;
    mp[s5] = n5;
    mp[s6] = n6;
    mp[s7] = n7;
    mp[s8] = n8;
    mp[s9] = n9;
    mp[s10] = n10;
}

int calculate(string s, map<string, int> &mp)
{
    int sum = 0;
    string tmp = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (!isdigit(s[i]))
        {
            tmp += s[i];
        }
        else
        {
            sum += mp[tmp] * (s[i] - '0');
            tmp = "";
        }
    }
    return sum;
}

int main()
{
    faster();
    map<string, int> mp;
    init(mp);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << calculate(s, mp) << endl;
    }
    return 0;
}