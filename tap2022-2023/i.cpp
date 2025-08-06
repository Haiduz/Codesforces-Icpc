#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
void solve(){
    forn(i,8){
        int temp;
        cin >> temp;
        if(temp == 9){
            cout << "F\n";
            return;
        }
    }
    cout << "S\n";
}

int main(){
    solve();
    return 0;
}