// Viết chương trình nhập số N (N < 10 ^ 6) in ra các số từ 1 -> N
// thỏa mãn có tổng các chữ số là số nguyên tố

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

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int sumOfInterger(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int checkPrime(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int main()
{
    faster();
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (checkPrime(sumOfInterger(n)))
        {
            cout << i << " ";
        }
    }
    return 0;
}