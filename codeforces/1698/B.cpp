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
    int n, k; cin >> n >> k; vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int m = 0;
    for(int i = 1; i < n-1; i++) {
        if(v[i] > v[i-1] + v[i+1]) {
            m++;
        }
    }

    // We now have the number of too tall elements. We can only increase the number of elements if k == 1;
    if(k==1) {
        cout << ceil((double)(n-2)/2)<< endl;
    } else {
        cout << m << endl;
    }

}

int main() {
    setIO();
    TestCase() sol();
}
