#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

//--------CODE--------//

const int INF = 1e18;
const int MOD = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, target;
    cin >> n >> target;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n; // on fait un binary search sur l'intervalle [l,r), la réponse sera l
    while (l+1 < r) {
        int m = (l+r)/2;

        if (a[m] <= target)
            l = m;
        else
            r = m;
    }

    cout << l << "\n";
}
