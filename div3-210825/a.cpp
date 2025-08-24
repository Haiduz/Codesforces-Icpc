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

void solve(){
    int n, m;
    string a,b,c;
    cin >> n >> a >> m >> b >> c;
    int it=0;
    forn(i,m){
        if(c[i]== 'D'){
            a.pb(b[it]);
            it++;
        }else if(c[i]== 'V'){
            a.insert(0, 1, b[it]); 
            it++;
        }
    } 
    cout << a << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
}