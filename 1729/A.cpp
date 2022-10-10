#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){
    int a , b , c;
    cin >> a >> b >> c ;
    if (a < abs(b - c) + c ) cout << 1 << endl;
    else if (a > abs(b - c) + c ) cout << 2 << endl;
    else cout << 3 << endl;

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