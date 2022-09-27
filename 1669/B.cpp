#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){
    int n ;
    cin >> n ;
    int a[n], c[n+1] = {0};
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for (int i = 0 ; i < n ; c[a[i]]++,i++){
        if(c[a[i]] == 2){
            cout << a[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
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
