#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define all(n) n.begin(),n.end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    cin >> ws; // stream out any
    for (int i = 0 ; i < n ; i ++){
        string s ;
        getline(cin,s);
    }
    int q ;
    cin >> q ;
    cin >> ws;
    int total = 0 ;
    set<string> infos;
    for ( int i = 0 ; i < q ; i++){
        string s;
        getline(cin,s);
        infos.insert(s);
        if ( infos.size() == n){
            total++;
            infos.clear();
            infos.insert(s);
        }
    }
    cout << total;

}