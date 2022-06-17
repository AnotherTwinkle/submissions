#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

#define TestCase() int ts; cin >> ts; while(ts--)
#define printvec(a) for(auto& x : (a)) cout << x << " "; cout << endl
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
    int x; cin >> x; vector<int> a(x); int s = 0;
    for(int i = 0; i < x; i++) {cin >> a[i]; s += a[i];}
    for(int i = 0; i < x; i++) {
        // cout << s << " " << a[i] << " " << s - a[i] << " " << x - 1 << endl;
        // cout << (s - a[i]) / (x-1) << endl;
        if ((double)a[i] == (double)(s - a[i]) / (x-1)) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    setIO();
    TestCase() {
        sol();
    }
}
