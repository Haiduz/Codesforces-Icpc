#include <bits/stdc++.h>
using namespace std;

int puntaje(int c) {
    if (c >= 11) 
        return 10;
    return c;
}

void solve() {
    int n;
    cin >> n;
    int j1, j2, m1, m2;
    cin >> j1 >> j2 >> m1 >> m2;
    vector<int> comunes(n);
    for (int i = 0; i < n; i++) {
        cin >> comunes[i];
    }

    vector<int> cards(14, 0);
    int john = puntaje(j1) + puntaje(j2);
    int maria = puntaje(m1) + puntaje(m2);
    cards[j1]++; cards[j2]++; cards[m1]++; cards[m2]++;

    for (int i = 0; i < n; i++) {
        int c = comunes[i];
        int p = puntaje(c);
        john += p;
        maria += p;
        cards[c]++;
    }

    int best = -1;
    for (int c = 1; c <= 13; c++) {
        if (cards[c] >= 4) 
            continue;

        int p = puntaje(c);
        int new_maria = maria + p;
        int new_john = john + p;

        if (new_maria > 23) 
            continue;

        if (new_maria == 23 || new_john > 23) {
            best = c;
            break;
        }
    }

    cout << best << endl;
}

int main() {
    solve();
    return 0;
}