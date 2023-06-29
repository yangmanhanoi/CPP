#include<bits/stdc++.h>
using namespace std;
int n, ans = 0;
int column[15] ={}, diagonal1[40] = {}, diagonal2[40] = {}, x[15];
void Try(int i)
{
    
    for(int j = 1; j <= n; j++)
    {
        if(column[j] == 0 and diagonal1[i - j + n] == 0 and diagonal2[i + j - 1] == 0)
        {
            column[j] = diagonal1[i - j + n] =  diagonal2[i + j - 1] = 1;
            x[i] = j;
            if(i == n)
            {
                ans++;
            }
            else Try(i + 1);
            column[j] = diagonal1[i - j + n] = diagonal2[i + j - 1] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    Try(1);
    cout << ans << endl;
    return 0;
}