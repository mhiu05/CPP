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


struct Sv{
public:
	string msv, name, ns, lop;
	double gpa;	
};

void nhap(Sv a[], int n){
	for(int i = 0; i < n; ++i){
		cin.ignore();
		getline(cin, a[i].msv);
		getline(cin, a[i].name);
		getline(cin, a[i].ns);
		getline(cin, a[i].lop);
		cin >> a[i].gpa;
		string ten = "";
		stringstream ss(a[i].name);
		string tmp;
		while(ss >> tmp){
			tmp[0] = toupper(tmp[0]);
			for(int i = 1; i < tmp.size(); ++i){
				tmp[i] = tolower(tmp[i]);
			}
			ten += tmp;
			ten += " ";
		}
		ten.pop_back();
		a[i].name = ten;
		if(a[i].ns[2] != '/') a[i].ns = "0" + a[i].ns;
		if(a[i].ns[5] != '/') a[i].ns.insert(3, "0");
	}
}

void in(Sv a[], int n){
	for(int i = 0; i < n; ++i){
		cout << a[i].msv << " " << a[i].name << " " << a[i].ns << " " << a[i]. lop << " ";
		cout << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

bool cmp(Sv a, Sv b){
	string da = a.ns.substr(0, 2), db = b.ns.substr(0, 2);
	string ma = a.ns.substr(3, 2), mb = b.ns.substr(3, 2);
	string ya = a.ns.substr(6, 4), yb = b.ns.substr(6, 4);
	if(ya != yb) return ya < yb;
	if(ma != mb) return ma < mb;
	if(da != db) return da < db;
	return a.msv < b.msv;
}

int main(){
	faster();
	int n; cin >> n;
	Sv a[n];
	nhap(a, n);
	sort(a, a + n, cmp);
	in(a, n);
	return 0;
}