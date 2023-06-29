#include<bits/stdc++.h>
using namespace std;
#define test() int t; cin >> t ; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    test()
    {
        string s; cin >> s;
        int n; cin >> n;
        int l = 0, r = 0;
        int count = -0;
        int ans = 0;
        while(l < s.size())
        {
            int f[200] = {0};
            while(r < s.size())
            {
                f[s[r]]++;
                if(f[s[r]] == 1) count++;
                r++;
                if(count == n) ans++;
                else if(count > n) break;
            }
            l++;
            count = 0;
            r = l;
        }
        cout << ans << endl;
    }
    return 0;
}