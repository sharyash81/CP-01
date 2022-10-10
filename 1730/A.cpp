#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){
    int n,c ;
    cin >> n >> c ;
    int a[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int counter[101] = {0};
    for (int i = 0 ; i < n ; i ++){
        counter[a[i]]++;
    }
    int total_cost = 0;
    for (int i = 1 ; i < 101 ; i++){
        if (counter[i] > c) total_cost += c;
        else total_cost+=counter[i];
    }
    cout << total_cost << endl;


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