#include <stdio.h>
#include <string.h>

int max ( int a , int b ){
    return a > b ? a : b ;
}
int solve(int n , int * a ) {
    if ( n == 1 ) return max(0,a[0]);
    int mid = n /2 ;
    int b[mid];
    int c[n-mid];
    for (int i = 0 ; i < mid ; i ++) b[i] = a[i];
    for (int i = mid ; i < n ; i++) c[i-mid] = a[i];
    int leftside = solve(mid,b);
    int rightside = solve(n-mid,c);
    int max1 = 0 , max2 = 0 , crossside = 0 ;
    for (int i = 0 ; i < n-mid ; i++)
    {
        crossside += c[i];
        if (crossside > max1) max1 = crossside;
    }
    crossside = 0;
    for (int i = mid - 1 ; i >= 0 ; i --)
    {
        crossside +=b[i];
        if (crossside > max2) max2 = crossside;
    }
    crossside = max1 + max2;
    return max(leftside, max(rightside,crossside));
}
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    for ( int i = 0 ; i < n ; i ++){
        scanf("%d",&a[i]);
    }
    printf("%d", solve(n,a));
}

