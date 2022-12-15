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
    int n , k ;
    cin >> n >> k ;
    vector<pair<int,int>> lines;
    for ( int i = 0 ; i < k ; i++)
    {
        int start , end ;
        cin >> start >> end;
        lines.push_back({start,end});
    }
    int counter = 0 ;
    sort(lines.begin(),lines.end(),[] ( pii const& s1 , pii const& s2) -> bool{
       return s1.first > s2.first || ( s1.first == s2.first && s1.second < s2.second);
    });
    std::reverse(lines.begin(), lines.end());
    int last_check = lines[0].first;
    int dist[n + 1] = {0};
    for (int i = 1; i < last_check; i++) dist[i] = i - 1;
    for (int i = 0 ; i < k ; i++)
    {
        while(last_check <= lines[i].first) { dist[last_check] = last_check - 1;last_check++;}
        while(last_check <= lines[i].second) { dist[last_check] = lines[i].first - 1;last_check++;}
    }
    while(last_check <= n){ dist[last_check] = last_check - 1;last_check++;}
    int ans[n+1] = {0};
    for (int i = 1; i <= n; i++) ans[i] = ans[dist[i]] + 1;
    cout << ans[n] ;
}