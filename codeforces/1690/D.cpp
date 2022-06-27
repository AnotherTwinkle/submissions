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
#define printmap(a) for(auto& i : (a)) cout << "{" << i.first << "," << i.second << "}" << endl
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

// Black 1; White 0;
int main() {
	setIO();
	TestCase() {
		int n, k; cin >> n >> k;
		int b, w; b = w = 0;
		vector<int> l(n);
		for(int i = 0; i < n; i++) {
			char x; cin >> x;
			l[i] = (x == 'B' ? 1 : 0);
		}

		for(int i = 0; i < k; i++) {
			if(l[i]==0) w++; else b++;
		}

		// cout << b << " " << w << endl;

		int m = k - b;
		for(int i = 1; i + k - 1 < n; i++) {
			if(l[i-1]) b--; else w--;
			if(l[i+k-1]) b++; else w++;
			m = min(m, k - b);
		}

		cout << m << endl;
	}
}