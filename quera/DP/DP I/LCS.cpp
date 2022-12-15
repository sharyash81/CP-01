#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define all(n) n.begin(),n.end()
#define forr(n) for (int i = 0 ; i < n ; i ++)
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ,m ;
    cin >> n >> m ;
    int a[n],b[m];
    forr(n){
        cin >> a[i];
    }
    forr(m){
        cin >> b[i];
    }
    int t = 0 ;
    int l ;
    if ( n < m ) l = n;
    else l = m;
    int dp[l]= {0};
    for (int i = 1 ; i < n , t < m  ; t++){
        if ( a[i] == b[t]){
            dp[i] = dp[i-1] + 1 ;
            i++;
        }
        else dp[i] = dp[i-1];
    }
    cout << dp[l-1];
}