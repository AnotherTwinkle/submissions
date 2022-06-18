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
	TestCase(){
		int n, m; cin >> n >> m;
		// We need to find the pos of the maximum int;
		ll mx = -(1e9 + 1); int mn, mm;
		for (int i=0; i < n; i++) {
			for (int j=0; j < m; j++) {
				ll x; cin >> x;
				if (x > mx) {
					mx = x; mn = i+1; mm = j+1;
				}
			}
		}

		int h = max(mn, n - mn + 1);
		int w = max(mm, m - mm + 1);
		// cout << mm << " " << mn << endl;
		// cout << h << " " << w << endl;
		cout << h * w << endl;
	}	
}