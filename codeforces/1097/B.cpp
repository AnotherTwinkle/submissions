#include <bits/stdc++.h>
#include <cmath>
#include <bitset>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

#define TestCase() int ts; cin >> ts; while(ts--)
#define printvec(a) for(auto& i : (a)) cout << i << " "; cout << endl
#define printpair(a) cout << "(" << (a).ff  << " "<< (a).ss << ")" << endl
#define returncout(s) cout << ((s)) << endl; return
#define vecinput(x, v) for(int fjj = 0; fjj < (x); fjj++) cin >> (v)[fjj]

#define all(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define ctz(x) (ll)__builtin_ctz((x))

const long long llzero = 0;

void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    if(sz(name)){
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }
}

void sol() {
	int n; cin >> n; vector<int> v(n);
	vecinput(n, v);
	for(int i = 0; i < (1<<(n)); i++) {
		int sum = 0;
		for(int j = n-1; j >= 0; j--) {
			int s = i & (1 << j);
			int e = v[n-j-1];
			if(s) {
				sum += v[n-j-1];
				sum = (sum>359 ? sum - 360 : sum);
			} else {
				sum -= v[n-j-1];
				sum = (sum<0 ? abs(sum) : sum);
			}
		}
		//cout << sum << endl;
		//cout << endl;
		//cout << bitset<3>(i) << endl;
		if(!sum) {cout << "YES" << endl; return;}
	}

	cout << "NO" << endl;
}

int main() {
	setIO();
	sol();
}
