#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < (int)(n); i++)

void solve() {
    int n;
    cin >> n;
    vector<int> baloons(n);
    int max_h = 0;
    forn(i, n) {
        cin >> baloons[i];
        max_h = max(max_h, baloons[i]);
    }

    // guasrda pos ordenadas
    vector<vector<int>> pos(max_h + 1); // las alturas deben ser menores o iguales al maximo a ver si va mas rapido
    forn(i, n) {
        pos[baloons[i]].push_back(i);
    }

    int arrows = 0;
    forn(i, n) {
        if (baloons[i] == 0) continue; // reventado

        arrows++;
        int arrow_height = baloons[i];
        int current_pos = i;

        while (arrow_height > 0 && current_pos != -1) {
            vector<int>::iterator it = lower_bound(pos[arrow_height].begin(), pos[arrow_height].end(), current_pos); // busca el primer indice a la derecha
            if (it == pos[arrow_height].end()) {
                current_pos = -1; // flag q no hay
            } else {
                current_pos = *it;
                baloons[current_pos] = 0; // revienta el globo
                pos[arrow_height].erase(it); // borramo
                arrow_height--;
            }
        }
    }

    cout << arrows << "\n";
}

int main() {
    solve();
    return 0;
}