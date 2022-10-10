#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){
    int n ;
    cin >> n;
    int x[2 * n] = {0};
    int t[2 * n] = {0};
    for ( int i = 0 ; i < n ; i ++){
        cin >> x[i];
    }
    for (int i = 0 ; i < n ; i ++){
        cin >> t[i];
    }
    for (int i = 0 ; i < n ; i ++){
        x[i+n] = x[i]+t[i];
        x[i] -= t[i];
    }
    int min = *min_element(x,x+2*n);
    int max = *max_element(x,x+2*n);
    cout << ((double)min+max) / 2 << endl;
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