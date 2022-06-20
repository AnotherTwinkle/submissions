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
		int n; cin >> n; vector<int> a(n), b(n);
		vector<int> m;
		vecinput(n, a); vecinput(n, b);

		for(int i = 1; i < n; i++) {
			int j = i;
			while(a[j] < a[j-1] && j > 0) {
				int x = a[j]; int y = b[j];
				a[j] = a[j-1]; a[j-1] = x;
				b[j] = b[j-1]; b[j-1] = y;
				m.push_back(j);
				j--;
			}
		}

		for(int i = 0; i < n-1; i++) {
			int j = 0;
			while(a[i+j] == a[i+j+1]) j++;
			for(int k = i+1; k < i+j+1; k++) {
				int l = k;
				while(b[l] < b[l-1] && l > i) {
					int x = b[l];
					b[l] = b[l-1]; b[l-1] = x;
					m.push_back(l);
					l--;
				}
			}
			i += j;
		}

		// printvec(a); printvec(b);
		bool sorted = true;
		for(int i = 1; i < n; i++) {
			if(b[i] < b[i-1]) {sorted = false; break;}
		}
		if(!sorted) {cout << -1 << endl; continue;}
		cout << m.size() << endl;
		for(auto& i : m) {cout << i+1 << " " << i << endl;}
	}
}
