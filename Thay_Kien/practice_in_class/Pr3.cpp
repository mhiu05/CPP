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

struct Sv
{
    string name, msv;
    double gpa;
};

void nhap(Sv a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin.ignore();
        getline(cin, a[i].name);
        getline(cin, a[i].msv);
        cin >> a[i].gpa;
    }
}

bool cmp(Sv a, Sv b)
{
    return a.gpa < b.gpa;
}

void in(Sv a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i].gpa >= 7.0)
        {
            cout << a[i].name << " " << a[i].msv << " ";
            cout << fixed << setprecision(1) << a[i].gpa << endl;
        }
    }
}

int main()
{
    faster();
    int n;
    cin >> n;
    Sv a[100];
    nhap(a, n);
    sort(a, a + n, cmp);
    in(a, n);
    return 0;
}