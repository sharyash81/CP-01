#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define all(n) n.begin(),n.end()
#define forr(n) for (int i = 0 ; i < n ; i ++)

const int N = 3e3 + 7;
int cost[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , B ;
    cin >> n >> B ;
    forr(n){
        cin >> cost[i];
    }
    ll dp[n][B+1][2];
    ll ans = 1e9 + 7;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j <= B ; j++){
            dp[i][j][0] = 1e9 + 7;
            dp[i][j][1] = 1e9 + 7;
        }
    }
    dp[0][B-1][0] = 0;
    dp[0][B][1] = 0;
    for (int i = 1 ; i < n ; i ++){
        for (int j = 0 ; j <= B ; j++){
            if ( 2 * B - i - j <= 0 ) continue;
            if (j == B) dp[i][j][1] = dp[i-1][j][1];
            else {
                dp[i][j][0] = min(dp[i - 1][j + 1][0], dp[i - 1][j + 1][1] + cost[i]);
                dp[i][j][1] = min(dp[i - 1][j][1], dp[i - 1][j][0] + cost[i]);
            }
        }
    }
    forr(B+1) ans = min(ans,min(dp[n-1][i][1],dp[n-1][i][0]));
    cout << ans ;
}