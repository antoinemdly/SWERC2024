// #include <bits/stdc++.h>
#include <iostream>
#include <map>

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
    int tests, n;
    cin >> tests;

    for(int i = 0; i < tests; i++){
        map<int, int> BeautyMap;

        cin >> n;
        //cout << "testing" << endl;
        for (int j = 0; j < n; j++){
            int beauty, difficulty;
            cin >> beauty >> difficulty;

            if (BeautyMap.count(difficulty) == 0){ // no key with difficulty
                BeautyMap[difficulty] = beauty;
            }
            else{ // key already exist
                BeautyMap[difficulty] = max(BeautyMap[difficulty],beauty); // take the biggest beauty
            }
        }

        if (BeautyMap.size() < 10){ // not all difficulty
            cout << "MOREPROBLEMS" << endl;
        }
        else{ // sum all beauty
            int beauty_sum = 0;
            for (int i = 1; i <= 10; i++){
                beauty_sum += BeautyMap[i];
            }
            cout << beauty_sum << endl;
        }
    }

    return 0;
}
