// chưa đúng

#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

struct qli
{
    string day, name, phone;
};

int check_phone(string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (!isdigit(s[i]))
            return 0;
    }
    return 1;
}

int cmp(qli a, qli b)
{
    return a.name < b.name;
}

int main()
{
    faster();
    ifstream in("SOTAY.txt");
    ofstream out("DIENTHOAI.txt");

    qli a[1005];
    int cnt = 0;
    string s;
    int ok = 1;
    while (getline(in, s))
    {
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        if (v[0] == ("Ngay"))
        {
            a[cnt].day = v[v.size() - 1];
            ok = 0;
        }
        else if (!check_phone(s))
        {
            a[cnt].name = s;
        }
        else if (check_phone(s))
        {
            a[cnt].phone = s;
            ++cnt;
        }
    }

    sort(a, a + cnt);
    for (int i = 0; i < cnt; ++i)
    {
        out << a[i].name << ": " << a[i].phone << " " << a[i].day;
    }
    out << endl;

    in.close();
    out.close();
    return 0;
}