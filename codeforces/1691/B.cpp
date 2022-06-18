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

void sol() {
    int n; cin >> n; vector<int> a(n), b;
    for(int i=0; i < n; i++) cin >> a[i];
    for(int i=0; i < n; i++) {
        int r = 1;
        while(i + r < n) {
            if(a[i+r-1] == a[i+r]) r++;
            else break;
        }
        if (r==1) {cout << -1 << endl; return;}
        b.push_back(i+r);
        for(int j = 1; j < r; j++) b.push_back(i+j);
        i += r - 1;
    }

    printvec(b);
}

int main() {
	setIO();
    TestCase() sol();
}