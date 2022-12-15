#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define all(n) n.begin(),n.end()
#define forr(n) for (int i = 0 ; i < n ; i ++)

ll partial_sum(ll first , ll last , ll array[] ){
    ll total = 0 ;
    for ( int i = first ; i <= last ; i++) total+=array[i];
    return total;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll num , n  ;
    cin >> num >> n ;
    ll a[n];
    ll sum[n] = {0};
    for (ll i = 0 ; i < n ; i ++) {
        cin >> a[i];
        if ( i > 0 ) sum[i] = sum[i-1] + a[i];
    }
    ll dp[n][n]= {};
    for ( ll k = 1 ; k < n ; k ++){
        for ( ll i = 0 ; i < n - k ; i ++){
            ll j = i + k ;
            if (k==1) dp[i][j] = a[i] + a[j];
            else {
                ll minn = 2e18+ 5;
                for ( ll l = i ; l < j ; l++) minn = min(minn,dp[i][l] + dp[l+1][j]);
                dp[i][j] = partial_sum(i,j,a) + minn;
            }
        }
    }
    cout << dp[0][n-1];
}