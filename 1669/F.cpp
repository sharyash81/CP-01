#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
void solve(){
    int n ;
    cin >> n ;
    int a[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int left[n],right[n],l = 0,r=0;
    for (int i = 0 ; i < n ; i++){
        l+=a[i];
        r+=a[n-i-1];
        right[i] = r;
        left[i] = l;
    }
    int cmax = 0 ;
    for (int i=0,j=0 ; i+j+2<=n ;){
        if (left[i] < right[j]) i++;
        else if (left[i] > right[j]) j++;
        else {
            cmax = i+j+2;
            i++;
            j++;
        }
    }
    cout << cmax << endl;
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
