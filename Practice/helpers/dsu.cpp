#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

//--------CODE--------//

vector<int> dsu; // un nombre négatif k signifie que l'élément est la racine de l'ensemble et sa taille est -k
                 // un nombre positif est juste l'élément suivant relié à la racine

int find(int u) {
    if (dsu[u] < 0)
        return u;
    return dsu[u] = find(dsu[u]);
}

void onion(int u, int v) { // union est un mot réservé donc j'utilise onion
    u = find(u);
    v = find(v);

    if (u == v)
        return;
    if (dsu[u] > dsu[v])
        swap(u,v);
    dsu[u] += dsu[v];
    dsu[v] = u;
}

const int INF = 1e18;
const int MOD = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    dsu.assign(n, -1);

    // entrée


}
