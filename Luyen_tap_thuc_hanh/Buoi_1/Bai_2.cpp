// bài xor
#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
#define PI 3.141592653589793238
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<ll, int> pi;
typedef vector<pi> vii;

const ll modi = 1000000007;
const int MAXN = 1e7 + 1;

ll computeXOR(ll x)
{
    if (x % 4 == 0)
        return x;
    if (x % 4 == 1)
        return 1;
    if (x % 4 == 2)
        return x + 1;
    return 0;
}

int main()
{
    ll A, B;
    cin >> A >> B;

    ll result = computeXOR(B) ^ computeXOR(A - 1);

    cout << result << endl;
    return 0;
}
