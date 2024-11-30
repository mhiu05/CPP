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

struct SoPhuc
{
    int thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b)
{
    SoPhuc c;
    c.thuc = (a.thuc + b.thuc) * (a.thuc + b.thuc) - (a.ao + b.ao) * (a.ao + b.ao);
    c.ao = 2 * (a.thuc + b.thuc) * (a.ao + b.ao);
    return c;
}

void hien_thi(SoPhuc c)
{
    cout << c.thuc << " + " << c.ao << "i";
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        SoPhuc A;
        SoPhuc B;
        cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
        SoPhuc C = binh_phuong_tong(A, B);
        hien_thi(C);
        cout << endl;
    }
    return 0;
}