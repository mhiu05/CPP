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

struct info
{
    string name, phone, date;
};

int cmp(info a, info b)
{
    string Name1 = "", Name2 = "";
    vector<string> v1, v2;
    stringstream ss1(a.name), ss2(b.name);
    string tmp;
    while (ss1 >> tmp)
    {
        v1.push_back(tmp);
    }
    while (ss2 >> tmp)
    {
        v2.push_back(tmp);
    }
    Name1 += v1[v1.size() - 1];
    for (int i = 0; i < v1.size() - 1; ++i)
    {
        Name1 += " ";
        Name1 += v1[i];
    }
    Name2 += v2[v2.size() - 1];
    for (int i = 0; i < v2.size() - 1; ++i)
    {
        Name2 += " ";
        Name2 += v2[i];
    }
    return Name1 < Name2;
}

int main()
{
    faster();
    ifstream in;
    ofstream out;
    in.open("SOTAY.txt");
    out.open("DIENTHOAI.txt");

    vector<info> Info;
    string s, name, Date;

    while (getline(in, s))
    {
        if (s.substr(0, 4) == "Ngay")
        {
            Date = s.substr(5);
        }
        else if (!isdigit(s[0]))
        {
            name = s;
        }
        else
        {
            string phone = s;
            Info.push_back({name, phone, Date});
        }
    }

    sort(Info.begin(), Info.end(), cmp);

    for (auto info : Info)
    {
        out << info.name << ": " << info.phone << " " << info.date << endl;
    }

    in.close();
    out.close();
    return 0;
}