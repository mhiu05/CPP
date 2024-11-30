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



int main()
{
    faster();
    int n; cin >> n;
    vector<string> v;
    map<string, ll> mp;
    for(int i = 0; i < n; ++i){
    	string x; cin >> x;
    	sort(x.begin(), x.end());
    	mp[x]++;
	}
	ll sum = 0;

	for(auto it : mp){
		if(it.second > 1){	
			sum += it.second * (it.second - 1) / 2;
		}
	}
	cout << sum;
    return 0;
}