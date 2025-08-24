#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    ll x = 0;
    ll coins = 0;
    while (pow(3, x + 1) <= n) x++;
    for (ll i = x; i >= 0; i--) {
        ll power = ll(pow(3, i));
        ll count = n / power; // cuantas veces entra en n 3^i
        n -= count * power;

        for (ll j = 0; j < count; j++) { // sumo tantos coins como veces entre en i 
            coins += pow(3,i+1) + i*(pow(3,i-1));
            cout << " coins: " << coins << " ";
        }
    }
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
