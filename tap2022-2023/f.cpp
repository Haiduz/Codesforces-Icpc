#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, c;
    cin >> n >> c;
    unordered_map <string, int> freq_palabras;
    freq_palabras.reserve(n*26);
    cin.ignore();
    for(int i =0; i<n; i++){ // son n palabras che
        string s;
        getline(cin, s); 
        
        size_t pos = s.find('*');
        //cout << "El asterisco se encuentra en la posicion " << pos << "\n";
        for (char letra = 'a'; letra <= 'z'; ++letra) {
            s[pos] = letra; // unordered map inicializa en cero los int
            //cout << "se hashea la palabra " << s << "\n";
            freq_palabras[s]++;
        }
    }
    int maximo = 0;
    string palabra;
    unordered_map<string,int>::iterator it = freq_palabras.begin();
    while(it != freq_palabras.end()){
        if((*it).second > maximo || ((*it).second == maximo && (*it).first < palabra)){
            maximo = (*it).second;
            palabra = (*it).first;
        }
        it++;
    }
    cout << palabra << " " <<maximo << "\n";
}

int main(){
    solve();
    return 0;
}