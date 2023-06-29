#include<bits/stdc++.h>
using namespace std;
#define test() int t; cin >> t; while(t--)
#define ll long long
ll subCrossing(int a[], int l,int m,int r)
{
    ll sum = 0;
    ll max_left = INT_MIN;
    for(int i = m; i >= l; i--)
    {
        sum += a[i];
        if(sum > max_left)
        {
            max_left = sum;
        }
    }
    sum = 0;
    ll max_right = INT_MIN;
    for(int i = m + 1; i <= r; i++)
    {
        sum += a[i];
        if(sum > max_right)
        {
            max_right = sum;
        }
    }
    return max(max(max_left, max_right), max_left + max_right);
}
ll maxSub(int a[], int l, int r)
{
    if(l == r) return a[l];
    int m = l + ( r - l)/2;
    return max(max(maxSub(a,l,m), maxSub(a,m+1,r)), subCrossing(a,l,m,r));
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    test()
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int l = 0, r = n - 1;
        cout << maxSub(a,l,r) << endl; 
    }
    return 0;
}