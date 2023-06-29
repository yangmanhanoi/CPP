#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , S;
    cin >> n >> S;
    int c[n], p[n];
    for(int i = 1; i <= n; i++) cin >> c[i];
    for(int i = 1; i <= n; i++) cin >> p[i];
    int dp[n + 1][S + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= S; j++)
        {
            dp[i][j] = dp[i][j - 1];
            if(j >= c[i])
            {
                dp[i][j] = max(dp[i][j], dp[i][j - c[i]] + p[i]);
            }
        }
    }
    cout << dp[n][S] << endl;
    return 0;
}