#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){
    int n ;
    cin >> n ;
    string s[n];
    for (int i = 0 ; i < n ; i++){
        cin >> s[i];
    }
    ll count = 0 ;
    ll rows[11]= {0};
    ll cols[11]={0};
    ll matrix[11][11] ={0};
    for (int i = 0 ; i < n ; i++){
        rows[int(s[i][0])-97]++;
        cols[int(s[i][1])-97]++;
        matrix[int(s[i][0])-97][int(s[i][1])-97]++;
    }
    for (int i = 0 ; i < 11 ; i++){
        if (rows[i] > 1)    count += ((rows[i]*(rows[i]-1))/2);
        if (cols[i] > 1)    count += ((cols[i]*(cols[i]-1))/2);
    }
    for (int i = 0 ; i < 11 ; i++)
        for (int j = 0 ; j < 11 ; j++)
            if (matrix[i][j] > 1 )  count-=(matrix[i][j]*(matrix[i][j]-1));


    cout << count << endl;
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