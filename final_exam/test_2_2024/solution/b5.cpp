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

struct Sv
{
    string msv, name, ns, lop;
    double gpa;
};

void nhap(Sv a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].ns);
        getline(cin, a[i].lop);
        cin >> a[i].gpa;

        if (a[i].ns[2] != '/')
            a[i].ns = "0" + a[i].ns;
        if (a[i].ns[5] != '/')
            a[i].ns.insert(3, "0");

        string ten = "";
        stringstream ss(a[i].name);
        string tmp;
        while (ss >> tmp)
        {
            tmp[0] = toupper(tmp[0]);
            for (int i = 1; i < tmp.size(); ++i)
            {
                tmp[i] = tolower(tmp[i]);
            }
            ten += tmp;
            ten += " ";
        }
        ten.pop_back();
        a[i].name = ten;
    }
}

int cmp(Sv a, Sv b)
{
    if (a.lop != b.lop)
        return a.lop < b.lop;
    vector<string> v1, v2;
    string tmp1 = "", tmp2 = "";
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
    tmp1 = v1[v1.size() - 1];
    for (int i = 0; i < v1.size() - 1; ++i)
    {
        tmp1 += v1[i];
    }
    tmp2 = v2[v2.size() - 1];
    for (int i = 0; i < v2.size() - 1; ++i)
    {
        tmp2 += v2[i];
    }
    return tmp1 < tmp2;
}

void in(Sv a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].msv << " " << a[i].name << " " << a[i].ns << " " << a[i].lop << " ";
        cout << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main()
{
    faster();
    int n;
    cin >> n;
    Sv a[n];
    nhap(a, n);
    sort(a, a + n, cmp);
    in(a, n);
    return 0;
}