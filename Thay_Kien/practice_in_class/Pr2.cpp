// Nhập 1 số (Không quá 500 kí tự)
// In ra YES nếu như đây là số thuận nghịch và chỉ chứa hoàn toàn các chữ số lẻ
// In ra NO nếu ngược lại

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

int checkReverseNumber(string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != s[s.size() - i - 1])
            return 0;
    }
    return 1;
}

int checkAllDigitOddOfANumber(string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if ((s[i] - '0') % 2 == 0)
            return 0;
    }
    return 1;
}

int main()
{
    faster();
    string s;
    cin >> s;
    if (checkAllDigitOddOfANumber(s) && checkReverseNumber(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}