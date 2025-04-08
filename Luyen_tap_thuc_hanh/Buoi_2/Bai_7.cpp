#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo A, PhanSo B)
{
    PhanSo C;
    ll x = (A.tu * B.mau + A.mau * B.tu);
    ll y = A.mau * B.mau;
    C.tu = x / __gcd(x, y);
    C.mau = y / __gcd(x, y);
    return C;
}

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}
