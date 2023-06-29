#include<bits/stdc++.h>
using namespace std;
int n , S , a[30], b[30], ans = 0;
void Try(int i , int time = 0, int point = 0)
{
    // NHánh cận
    if(time > S) return;
    ans = max(ans, point);
    for(int j = i; j <= n; j++)
    {
        if(time <= S)
        Try(j + 1, time + a[j],point + b[j]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> S;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    Try(1);
    cout << ans << endl;
    return 0;
}