#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define all(n) n.begin(),n.end()
#define forr(n) for (int i = 0 ; i < n ; i ++)

void solve(){
    int n , m , a , b ;
    cin >> n >> m >> a >> b ;
    int x = n/(2*a-1) , y = m/(2*b-1) ;
    if ( n % (2 * a - 1 ) >= a ) x++;
    if ( m % (2 * b - 1 ) >= b ) y++;
    cout << x * y << "\n";
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