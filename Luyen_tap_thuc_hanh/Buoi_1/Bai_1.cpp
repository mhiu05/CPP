// bài tìm vị trí string
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

int main()
{
    string A, B;
    cin >> A >> B;

    vector<int> positions;
    int pos = A.find(B);

    while (pos != string::npos)
    {
        positions.push_back(pos + 1);
        pos = A.find(B, pos + 1);
    }

    for (int p : positions)
    {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}
