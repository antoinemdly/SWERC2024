#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

//--------CODE--------//

const int INF = 1e18;
const int MOD = 1e9 + 7;

vector<vector<int>> g;
vector<int> vis;

void dfs(int u) { // 
    vis[u] = 1;
    // faire qqch avec u
    for (int v : g[u]) {
        if (vis[v])
            continue;
        // faire qqch avec v ou le résultat de dfs(v)
        dfs(v);
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    g.assign(n, {});
    vis.assign(n, 0);
    for (int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int u = 0; u < n; u++){
        if (!vis[u])
            dfs(u); // faire qqch avec le résultat de dfs(u)
    }
}
