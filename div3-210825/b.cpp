#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
#define dforr(i, a, b) for(int i = (int) b-1; i >= (int) a; i--)
#define dforn(i, n) dforr(i, 0, n)
#define sz(x) ((int) x.size())
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
const int MAXN = -1;

void solve() {
    ll n;
    cin >> n;
    set<ll> solutions; // Para evitar duplicados y mantener ordenados
    
    // Probamos con k desde 1 hasta 18 (ya que 10^18 es el máximo n)
    for (int k = 1; k <= 18; k++) {
        ll denominator = 1;
        for (int i = 0; i < k; i++) denominator *= 10;
        denominator += 1; // denominator = 10^k + 1
        
        if (n < denominator) continue; // No tiene sentido probar denominadores más grandes
        
        if (n % denominator == 0) {
            ll x = n / denominator;
            solutions.insert(x);
        }
    }
    
    // Output
    if (solutions.empty()) {
        cout << "0\n";
    } else {
        cout << solutions.size() << "\n";
        bool first = true;
        for (ll x : solutions) {
            if (!first) cout << " ";
            cout << x;
            first = false;
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}