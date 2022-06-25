#include <bits/stdc++.h>
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
#define vecinput(x, v) for(ll fjj = 0; fjj < (x); fjj++) cin >> (v)[fjj]

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
		int n; cin >> n; vector<ll> v(n);
		ll z = 0;
		for(ll i = 0; i < n; i++) {
			cin >> v[i];
			if(!v[i]) z++;
		}
		if(z==n) {cout << 0 << endl; continue;}
		for(ll i = 0; i < n; i++) {
			if(v[i]!=0) break;
			z--;
		}
		for(ll i = n-1; i >= 0 && z; i--) {
			if(v[i]!=0) break;
			z--;
		}
		cout << (z > 0 ? 2 : 1) << endl;
	}
}
