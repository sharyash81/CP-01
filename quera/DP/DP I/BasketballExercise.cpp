#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define all(n) n.begin(),n.end()
#define forr(n) for (int i = 0 ; i < n - 1  ; i ++)

bool capBig(int i , int count ){
    return  count >= i - count ;
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    int a[n],b[n];
    for ( int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n ; i++){
        cin >> b[i];
    }
    ll dp[3][n];
    dp[0][0] = a[0];
    dp[1][0] = b[0];
    dp[2][0] = 0;
    for (int i = 1 ; i < n ; i++){
        dp[0][i] = max(dp[1][i-1] , dp[2][i-1]) + a[i];
        dp[1][i] = max(dp[0][i-1] , dp[2][i-1]) + b[i];
        dp[2][i] = max(dp[0][i-1] , dp[1][i-1]);
    }
    cout << max(dp[0][n-1],max(dp[1][n-1],dp[2][n-1]));
}