#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

class PhanSo
{
private:
    ll ts, ms;

public:
    PhanSo() {}
    PhanSo(int ts, int ms)
    {
        this->ts = ts;
        this->ms = ms;
    }
    friend ostream &operator<<(ostream &out, PhanSo a)
    {
        out << a.ts << "/" << a.ms;
        return out;
    }
    friend PhanSo operator+(PhanSo &a, PhanSo &b)
    {
        PhanSo res;
        ll x = a.ts * b.ms + a.ms * b.ts;
        ll y = a.ms * b.ms;
        res.ts = x / __gcd(x, y);
        res.ms = y / __gcd(x, y);
        return res;
    }
    friend istream &operator>>(istream &in, PhanSo &a)
    {
        in >> a.ts >> a.ms;
        return in;
    }
};

int main()
{
    faster();
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}