#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int res = 0;
        int l = 0, r = n - 1;
        while(l < n)
        {
            if(a[l] <= a[r])
            {
                res = max(res, r - l);
                l++;
                r = n - 1;
            }
            else
            {
                r--;
            }
        }
        cout << res << endl;
    }
    return 0;
}