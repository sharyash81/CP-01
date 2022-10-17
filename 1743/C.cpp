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
    string l ;
    cin >> l;
    vector<int> a;
    vector<char> lids;
    for (int i = 0 ; i < l.size() ; i++){
        lids.push_back(l[i]);
    }
    for ( int i = 0 ; i < n ; i ++){
        int t ;
        cin >> t ;
        a.push_back(t);
    }
    int total = 0 ;
    vector<bool> c;
    for ( int i = 0 ; i < n ; i++){
        c.push_back(false);
    }
    for ( int i = 0 ; i < n - 1 ; i++){

        if (a[i] > a[i+1]){
            if (lids[i] == '0'){
                if (lids[i+1] == '1'){
                    total+=a[i];
                    c[i] = true ;
                    lids[i] = '1';
                    lids[i+1] = '0';
                }
                else continue;
            }
            else {
                total+=a[i];
                c[i] = true;
            }
        }
        else if (lids[i] == '0'){
            bool shift = false;
            int t;
            for (t = i + 1; t < n; t++) {
                if (lids[t] == '0' || c[t]) break;
                if (a[t] < a[i]) {
                    shift = true;
                    break;
                }
            }
            if (shift) {
                for (int z = i; z < t; z++) {
                    c[z] = true;
                    lids[t] = '0';
                    lids[i] = '1';
                }
                total += a[i];
            }
        }
        else {
            total += a[i];
            c[i] = true;
        }
    }
    if (lids[n-1] == '1' ){
        total += a[n-1];
    }
    cout << total << "\n";

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
