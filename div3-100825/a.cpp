#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, cont = 0;
    cin >> n;
    vector <int> a(n), b(n);
    for(int i = 0; i<n; i++)cin >> a[i];
    for(int i = 0; i<n; i++)cin >> b[i];

    while(true){

        bool decrementar = false;

        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                a[i]--;
                decrementar = true;
                break;
            }
        }

        for(int i =0; i<n; i++){
            if(a[i]<b[i]){
                a[i]++;
                break;
            }
        }

        if(!decrementar){
            cont++;
            break;
        }
        cont++;
    }

    cout << cont << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}