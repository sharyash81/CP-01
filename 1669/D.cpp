#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
void solve(){
    int l;
    cin >> l;
    string s;
    cin >> s;
    int flag = 1;
    for (int i = 0 ; i < l ; i++){
        if(s[i] == 'W') continue;
        char c = s[i];
        flag = 0;
        while(i < l && s[i]!='W'){
            if (s[i]!=c){
                flag = 1;
            }
            i++;
        }
        if (!flag){
                cout << "NO" << endl;
                return;
        }
    }
    cout << "YES" <<endl;
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
