#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define all(n) n.begin(),n.end()


//vector<pair<int,int>> f ;
//for ( int i = 0 ; i < n ; i ++){
//int a , b ;
//cin >> a  >> b ;
//if ( b - a > 0 ){
//f.push_back({a,b-a});
//}
//}
//sort(f.begin(),f.end());
void solve(){
    int n ,j ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i ++){
        cin >> j;
    }
    int t = 10 - n ;
    cout << t * ( t - 1 ) * 6 / 2 << "\n";

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
