#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define all(n) n.begin(),n.end()

void solve(){
    int n;
    cin >> n ;
    int a[n];
    int i ;
    int t;
    for (i = 0 ,t = 0 ; i < n && t < n ; i++,t+=2){
        a[t] = (i+1);
    }
    for ( int j = 1 , i = 0 ; j < n ; j +=2 , i++){
        a[j] = n - i ;
    }
    for ( int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << "\n";

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
