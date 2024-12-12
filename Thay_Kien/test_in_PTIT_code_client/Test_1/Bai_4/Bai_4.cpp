
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

class Qli
{
public:
    string day, name, sdt;
    Qli() {};
    Qli(string day, string name, string sdt)
    {
        this->day = day;
        this->name = name;
        this->sdt = sdt;
    }
};

int cmp(Qli a, Qli b)
{
    string ten1 = "", ten2 = "";
    stringstream ss1(a.name), ss2(b.name);
    vector<string> v1, v2;
    string tmp;
    while (ss1 >> tmp)
    {
        tmp[0] = toupper(tmp[0]);
        for (int i = 1; i < tmp.size(); ++i)
        {
            tmp[i] = tolower(tmp[i]);
        }
        v1.push_back(tmp);
    }
    while (ss2 >> tmp)
    {
        tmp[0] = toupper(tmp[0]);
        for (int i = 1; i < tmp.size(); ++i)
        {
            tmp[i] = tolower(tmp[i]);
        }
        v2.push_back(tmp);
    }
    ten1 = v1[v1.size() - 1];
    ten2 = v2[v2.size() - 1];
    for (int i = 0; i < v1.size() - 1; ++i)
    {
        ten1 += " ";
        ten1 += v1[i];
    }
    for (int i = 0; i < v2.size() - 1; ++i)
    {
        ten2 += " ";
        ten2 += v2[i];
    }
    return ten1 < ten2;
}

int main()
{
    faster();
    ifstream in("SOTAY.txt");
    ofstream out("DIENTHOAI.txt");
    string s;
    string day, name, sdt;
    vector<Qli> v;
    while (getline(in, s))
    {
        if (s.substr(0, 4) == "Ngay")
        {
            day = s.substr(5);
        }
        else if (!isdigit(s[0]))
        {
            name = s;
        }
        else
        {
            sdt = s;
            v.push_back(Qli(day, name, sdt));
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); ++i)
    {
        out << v[i].name << ": " << v[i].sdt << " " << v[i].day << endl;
    }
    in.close();
    out.close();
    return 0;
}
