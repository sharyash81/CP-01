#include <bits/stdc++.h>
#include "algorithm"
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
    int n , k ;
    cin >> n >> k ;
    vector<pair<int,int>> f ;
    for ( int i = 0 ; i < n ; i ++){
        int a , b ;
        cin >> a  >> b ;
        if ( b - a > 0 ){
            f.push_back({a,b-a});
        }
    }
    sort(f.begin(),f.end());
    ll total_energy = k;
    for ( int i = 0 ; i < f.size() ; i++)
        if (total_energy >= f[i].first) total_energy += f[i].second;
        else break;
    cout << total_energy;
}