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

    int N, M;

    cin >> N >> M;

    vector<pair<int,int> > MyVector;

    for(int i = 0;i < N;i++){
        pair<int,int> MyPair;
        cin >> MyPair.first >> MyPair.second;

        MyVector.push_back(MyPair);
    }

    for(int person = 0; person < M; person++){
        int taste_weigt,plate_weight;
        cin >> taste_weigt >> plate_weight;

        int favorite = -1;
        float max_score = -1;

        for(int j = 0; j < N; j++){
            pair<int,int> dish = MyVector[j];

            float score = (dish.first * taste_weigt + dish.second * plate_weight)/2;

            if (score > max_score){
                favorite = j+1;
                max_score = score;
            }
        }

        cout << favorite << endl;
    }
}
