#include<bits/stdc++.h>
using namespace std;
int n = 8, a[10][10], res = 0;
int x[10], column[20] = {}, diagonal1[20] = {}, diagonal2[20] = {};

void Try(int i, int sum = 0)
{
    for(int j = 1; j <= n; j++)
    {
        if(column[j] == 0 and diagonal1[i - j + n] == 0 and diagonal2[i + j - 1] == 0)
        {
            column[j] = diagonal1[i - j + n] = diagonal2[i + j - 1] = 1;
            x[i] = j;
            if(i == n)
            {
                res = max(res, sum + a[i][j]);
            }
            else
            {
                Try(i + 1, sum + a[i][j]);
            }
            column[j] = diagonal1[i - j + n] = diagonal2[i + j - 1] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i = 1; i <= n; i ++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << res << endl;
    return 0;
}