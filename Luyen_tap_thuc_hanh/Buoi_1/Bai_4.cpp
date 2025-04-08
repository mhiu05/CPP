// bài phân tích tsnt
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

vector<int> primeNumber;

int isPrime[10000000 + 5];
void eratos()
{
    for (ll i = 2; i <= 10000000; ++i)
    {
        isPrime[i] = 1;
    }
    for (ll i = 2; i <= sqrt(10000000); ++i)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 10000000; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    for (ll i = 2; i <= 10000000; ++i)
    {
        if (isPrime[i])
            primeNumber.push_back(i);
    }
}

void spilit(ll n)
{
    vector<pi> ans;
    for (int x = 0; x < primeNumber.size(); ++x)
    {
        if (n % primeNumber[x] == 0)
        {
            int cnt = 0;
            while (n % primeNumber[x] == 0)
            {
                cnt++;
                n /= primeNumber[x];
            }
            ans.push_back({primeNumber[x], cnt});
        }
    }
    if (n > 1)
        ans.push_back({n, 1});
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    eratos();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        spilit(n);
        cout << endl;
    }
    return 0;
}
