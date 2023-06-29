#include<bits/stdc++.h>
using namespace std;
int n,k, ans,cnt, a[100000];
// Kiem tra xem gia tri cua x bat ky co thoa man xep duoc k ban nam hay k
bool check(int x, int a[])
{
    int prev = a[0];
    cnt = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] - prev >= x)
        {
            prev = a[i];
            cnt++;
        }
        if(cnt >= k) return 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        int l = 0, r = 1E9;
        while(l <= r)
        {
            int x = (l + r) / 2;
            if(check(x,a))
            {
                ans = x;
                l = x + 1;
            }
            else r = x - 1;
        }
        cout << ans << endl;
    }
    return 0;
}