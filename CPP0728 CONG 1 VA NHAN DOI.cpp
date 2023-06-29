#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int n, p; cin >> n >> p;
        int x = n / p, ans = x, tmp = p;
        while(x > 0)
        {
            tmp *= p;
            x = n / tmp;
            ans += x;

        }
        cout << ans << endl;
    }
    return 0;
}