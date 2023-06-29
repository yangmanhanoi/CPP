#include<bits/stdc++.h>
using namespace std;
#define test() int t; cin >> t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    test()
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            int res = 1, tmp = a[i];
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] > tmp)
                {
                    res++;
                    tmp = a[j];
                }
            }
            ans = max(ans,res);
        }
        cout << ans << endl;
    }
    return 0;
}