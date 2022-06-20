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
	TestCase() {
		int n, m;
		int amax = 0; int bmax = 0;
		cin >> n; vector<int> a(n); 
		for(int i = 0; i < n; i++) {cin >> a[i]; if(a[i] > amax) amax = a[i];}
		cin >> m; vector<int> b(m); 
		for(int i = 0; i < m; i++) {cin >> b[i]; if(b[i] > bmax) bmax = b[i];}
		
		if(amax == bmax) cout << "Alice\nBob" << endl;
		else cout << (amax > bmax ? "Alice\nAlice" : "Bob\nBob") << endl;
	}
}
