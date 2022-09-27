#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int num;
        cin >> num;
        if (num < 1400) cout << "Division 4" << endl;
        else if (num < 1600) cout << "Division 3" << endl;
        else if (num < 1900) cout << "Division 2" << endl;
        else cout << "Division 1" << endl;
    }
}
