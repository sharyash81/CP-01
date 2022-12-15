#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define mii map<int, int>
#define mci map<char, int>
#define pii pair<int,int>
#define all(n) n.begin(),n.end()
#define forr(n) for (int i = 0 ; i < n ; i ++)
#define foreach(array) for( auto var : array )

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    int a[n];
    forr(n) cin >> a[i];
    mii counter;
    forr(n) counter[a[i]]++;
    vector<int> counts;
    foreach(counter) counts.push_back(var.second);
    sort(counts.begin(),counts.end());

    n = counts.size();
    int ans = 0;
    for ( int i = counts[n-1] ; i >= 1 ; i -- ){
        int total = i;
        int j = i ;
        int t = n - 1 ;
        while (j%2==0 && t > 0 && counts[t-1] >= j / 2 ){
            total += (j/=2);
            t--;
        }
        ans = max(total,ans);
    }
    cout << ans ;
}
