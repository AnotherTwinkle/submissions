#include <bits/stdc++.h>
#include <cmath>
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

const long long llzero = 0;

void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    if(sz(name)){
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }
}

int main() {
	setIO();
	TestCase() {
		int n; cin >> n; vector<ll> e, o;
		ll el = 10e17;
		while(n--) {
			ll x; cin >> x;
			if(x%2==0) {
				e.push_back(x);
				if(log2(x & -x) < el) el = log2(x & -x);
			}
			else o.push_back(x);
		}
		if(sz(o)) cout << sz(e) << endl;
		else cout << el + (sz(e) - 1) << endl;
	}
}
