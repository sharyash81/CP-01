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
    string s ;
    cin >> s ;
    int n = s.size();
    int dp[n] = {0};
    for ( int i = 1 ; i < n ; i++){
        if (isupper(s[i])) dp[0]++;
    }
    int min = dp[0];
    for ( int i = 1 ; i < n ; i++){
        if (isupper(s[i])){
            if(!isupper(s[i-1])) dp[i] = dp[i-1];
            else dp[i] = dp[i-1] - 1 ;
        }
        else {
            if(isupper(s[i-1])) dp[i] = dp[i-1];
            else dp[i] = dp[i-1] + 1 ;
        }
        if ( dp[i] < min) min = dp[i];
    }
    cout << min ;
}