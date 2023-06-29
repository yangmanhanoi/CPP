#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int m, n , a, b;
        cin >> m >> n >> a >> b;
        int res1 = (n/a - m/a);
        if(m % a == 0) res1++;
        int res2 = (n/b - m/b);
        if(m % b == 0) res2++;
        int LCM = (a*b)/__gcd(a,b);
        int res3 = (n/LCM - m/LCM);
        if(m % LCM == 0) res3++;
        cout << res1 + res2 - res3 << endl;
    }
    return 0;
}