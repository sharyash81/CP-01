#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define pii pair<int,int>
#define all(n) n.begin(),n.end()
#define forr(n) for (int i = 0 ; i < n ; i ++)


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll  n , m ;
    cin >> n >> m ;
    vector<pair<int,int>> s ;
    map<pair<int,int>,int> cost;
    forr(n){
        int p ,c ;
        cin >> p >> c ;
        s.push_back({p,c});
        cost[{p,c}] = ceil((double)c/p);
    }
    sort(s.begin(),s.end(),[] ( pii const& s1 , pii const& s2) -> bool{
        return ceil((double )s1.second / s1.first) < ceil((double)s2.second / s2.first);
    });
    int t = 0 ;
    ll days = ceil(s[0].second / s[0].first);
    ll profit = days * s[0].first - s[0].second;
    ll a = 0 , b = 0 ;
    while (t < n && profit < m ){
        a += s[t].first;
        b += s[t].second;
        profit += days * s[t].first - s[t].second;
        if (profit >= m ) break;
        if ( t < n - 1  && days * s[t+1].first - s[t+1].second > 0 ) t ++;
        else {
            days = ceil ( (double)(m+b)/ a );
            if ( t < n - 1 && cost[s[t+1]] < days ) {
                days = cost[s[t+1]];
                t++;
            }
            else break;
        }
    }
    cout << days ;

}
