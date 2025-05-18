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

    int k, lights;
    int max = 0;
    cin >> lights >> k;

    int arr[lights];

    for(int i = 0; i < lights; i++){
        arr[i] = 1;
    }

    for(int i = 0; i < k; i++){
        int input;
        cin >> input;

        // update table
        for(int j = input; j <= lights; j += input){
            if(arr[j-1] == 1){
                arr[j-1] = 0;
            }
            else{
                arr[j-1] = 1;
            }
        }

        int sum = 0;
        for(int p = 0; p < lights; p++){
            if (arr[p] == 0){
                sum++;
            }
        }
        //cout << "somme : "<< sum << endl;

        if (max < sum){
            max = sum;
        }
    }

    // for(int i = 0; i < lights; i++){
    //     cout << arr[i] << " ";
    // }

    cout << max << endl;
}
