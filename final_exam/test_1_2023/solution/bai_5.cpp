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
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].ns);
        cin >> a[i].gpa;

        string MSV = to_string(i + 1);
        while (MSV.size() < 3)
            MSV = "0" + MSV;
        MSV = "SV" + MSV;
        a[i].msv = MSV;

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

void in(Sv a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].msv << " " << a[i].name << " " << a[i].lop << " " << a[i].ns << " ";
        cout << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int cmp(Sv a, Sv b)
{
    if (a.gpa != b.gpa)
    {
        return a.gpa > b.gpa;
    }
    else
        return a.msv < b.msv;
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