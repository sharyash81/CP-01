#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){
    int n ;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int v[2] = {a[0]&1,a[1]&1};
    for (int i = 0 ; i < n ; i++)
    {
        if (a[i]&1^v[i&1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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


