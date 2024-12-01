#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

void faster(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main(){
	faster();
	int n; cin >> n;
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	for(int i = 1; i <= n; ++i){
		ll x; cin >> x;
		pq.push(x);
	}
	ll ans = 0;
	while(pq.size() > 1)
	{
		ll x = pq.top();
		pq.pop();
		ll y = pq.top();
		pq.pop();
		ans += x + y;
		pq.push(x + y);
	}	
	cout << ans << " " << pq.top();
	return 0;
}