#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int a[n], l = 0, r = n - 1;
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0;
        while(l < r)
        {
            if(a[l] == a[r])
            {
                l++; r--;
            }
            else if(a[l] < a[r])
            {
                a[l + 1] = a[l] + a[l + 1];
                cnt++;
                l++;
            }
            else
            {
                a[r - 1] = a[r] + a[r - 1];
                cnt++;
                r--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}