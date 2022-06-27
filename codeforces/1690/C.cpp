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

int main() {
	setIO();
	TestCase() {
		int n; cin >> n; vector<int> a(n), b(n);
		vecinput(n, a); vecinput(n, b);
		cout << b[0] - a[0] << " ";
		for(int i = 1; i < n; i++) {
			cout << (a[i] >= b[i-1] ? b[i] - a[i] : b[i] - b[i-1]) << " ";
		}
		cout << endl;
	}
}