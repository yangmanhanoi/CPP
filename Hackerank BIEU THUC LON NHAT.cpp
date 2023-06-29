#include<bits/stdc++.h>
using namespace std;
int a[4], ok = 1;
int b[3];
void ktao()
{
    for(int i = 1; i <= 3;i++) b[i] = 0;
}
void sinh()
{
    int i = 3;
    while(i >= 1 and b[i] == 1)
    {
        --i;
        b[i] = 0;
    }
    if(i == 0) ok = 0;
    else
    {
        b[i] = 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i = 1; i <= 4; i++) cin >> a[i];
    long long ans = -1E9;
    ktao();
    while(ok)
    {
        long long tmp = a[1];
        for(int i = 2; i <= 4; i++)
        {
            if(b[i-1] == 0) tmp -= a[i];
            else tmp += a[i];
        }
        ans = max(ans,tmp);
        sinh();
    }
    cout << ans << endl;
    return 0;
}