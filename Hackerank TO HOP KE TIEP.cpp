#include<bits/stdc++.h>
using namespace std;
int n, m, a[1005], ok = 1;
void ktao()
{
    for(int i = 1; i <= n; i++) a[i] = i;
}
void sinh()
{
    int i = m;
    while(i >= 1 and a[i] == n - m + i)
    {
        i--;
    }
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= m; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    sinh();
    if(!ok)
    {
        ktao();
        for(int i = 1; i <= m; i++) cout << a[i] << ' ';
    }
    else
    {
        for(int i = 1; i <= m; i++) cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}