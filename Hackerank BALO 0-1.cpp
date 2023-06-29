#include<bits/stdc++.h>
using namespace std;
int n,k, ok = 1;
int a[20],weight[20], value[20];;
long long tmp1 = 0, tmp2 = 0;
void ktao()
{
    for(int i = 1; i <= n; i++) a[i] = 0;
}
void sinh()
{
    int i = n;
    while(i >= 1 and a[i] == 1)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i] = 1; tmp1 += weight[i]; tmp2 += value[i];
        for(int j = i + 1; j <= n; j++)
        {
            a[j] = 0;
            tmp1 -= weight[j];
            tmp2 -= value[j];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> weight[i];
    for(int i = 1; i <= n; i++) cin >> value[i];
    long long ans = 0;
    ktao();
    while(ok)
    {
        if(tmp1 <= k) ans = max(ans, tmp2);
        sinh();
    }
    cout << ans << endl;
    return 0;
}