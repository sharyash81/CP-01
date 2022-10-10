#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){
    int n ;
    cin >> n;
    int x[n] = {0};
    for ( int i = 0 ; i < n ; i ++){
        cin >> x[i];
    }
    int t;
    int maxx = -1e9;
    int minn = 1e9;
    for (int i = 0 ; i < n ; i ++){
        cin >> t ;
        maxx = max(maxx,x[i]+t);
        minn = min(minn,x[i]-t);
    }
    cout <<fixed<<setprecision(6)<< ((double)minn+maxx) / 2 << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t;
    while (t--){
        solve();
    }
}