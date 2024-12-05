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

int dem = 0;

struct Team
{
    string id, signal, name;
    int match, diff, score;

    friend istream &operator>>(istream &in, Team &a)
    {
        getline(in, a.id);
        getline(in, a.signal);
        getline(in, a.name);
        in >> a.match >> a.diff >> a.score;
        in.ignore();
        string tmp;
        getline(in, tmp);
        return in;
    }
    friend ostream &operator<<(ostream &out, Team a)
    {
        ++dem;
        out << "#" << dem << " ";
        out << a.signal << " " << a.name << " " << a.match << " " << a.diff << " " << a.score << endl;
        out << "------------------\n";
        return out;
    }
};

bool cmp(Team a, Team b)
{
    if (a.score != b.score)
        return a.score > b.score;
    if (a.diff != b.diff)
        return a.diff > b.diff;
    return a.signal < b.signal;
}

int main()
{
    faster();
    Team a[20];
    for (int i = 0; i < 20; ++i)
    {
        cin >> a[i];
    }
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

        string s2 = s.substr(s.find("-") + 2);
        string name2 = s2.substr(s2.find(" ") + 1);
        int goal2 = stoi(s2.substr(0, s2.find(" ")));

        int curr1, curr2;
        for (int i = 0; i < 20; ++i)
        {
            if (a[i].name == name1)
                curr1 = i;
            if (a[i].name == name2)
                curr2 = i;
        }

        a[curr1].match++;
        a[curr2].match++;

        if (goal1 < goal2)
        {
            a[curr2].score += 3;
        }
        else if (goal1 == goal2)
        {
            a[curr1].score++;
            a[curr2].score++;
        }
        else
        {
            a[curr1].score += 3;
        }

        a[curr1].diff += goal1 - goal2;
        a[curr2].diff += goal2 - goal1;
    }

    sort(a, a + 20, cmp);

    for (int i = 0; i < 20; ++i)
    {
        cout << a[i];
    }
    return 0;
}