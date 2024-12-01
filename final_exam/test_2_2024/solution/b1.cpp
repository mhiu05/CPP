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

int check(ll n){
	ll can = sqrt(n);
	if(can * can == n) return 1;
	return 0;
}

int main()
{
    faster();
    ll n;
    cin >> n;
    for(ll i = 1; i <= 100000000; ++i){
    	if(check(n * i)){
    		cout << n * i;
    		break;
		}
	}
    return 0;
}