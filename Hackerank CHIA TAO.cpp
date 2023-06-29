#include<bits/stdc++.h>
using namespace std;
int n, a[25],b[25], ok = 1;
long long ans = 1E11;
void ktao()
{
    for(int i = 1; i <= n; i++) a[i] = 0;
}
void sinh()
{
    int i = n - 1;
    while(i >= 1 and a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i] = 1; 
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        sum += b[i];
    }
    ktao();
    while (ok)
    {
        long long res1 = 0, res2;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] == 1) res1+=b[i];
        }
        res2 = sum - res1;
        ans = min(ans, abs(res1 - res2));
        sinh();
    }
    cout << ans << endl;
    return 0;
}