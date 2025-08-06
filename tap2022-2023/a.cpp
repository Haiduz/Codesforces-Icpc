#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < (int)(n); i++)

void solve(){
    int n, total = 0, actual = 0;
    cin >> n;
    string s;
    cin >> s;
    forn(i,n){
        //longitud del substring actual mas largo
        if(s[i] == 'a')actual++;
        if(s[i] == 'b' || i==n-1){
            if(actual > 1){
                total += actual;
                //cout << "Substring de 'a' de longitud " << actual << "\n";
            }
            actual = 0;
        }
    }
    cout << total << "\n";
}

int main(){
    solve();
}