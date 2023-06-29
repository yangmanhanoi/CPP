#include<bits/stdc++.h>
using namespace std;
int n, a[20], ok = 1;
void ktao()
{
    for(int i = 1; i <= n; i++) a[i] = 6;
}
void sinh()
{
    int i = n;
    while(i >= 1 and a[i] == 8)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i] = 8;
        for(int j = i + 1; j <= n; j++)
        {
            a[j] = 6;
        }
    }
}
bool check()
{
    if(a[1] != 8 or a[n] != 6) return 0;
    int dem1 = 0, dem2 = 0;
    int i = 1;
    while(i <= n)
    {
        while(a[i] == 8)
        {
            dem1++;
            i++;
        }
        if(dem1 >= 2) return 0;
        dem1 = 0;
        while(a[i] == 6)
        {
            dem2++;
            i++;
        }
        if(dem2 > 3) return 0;
        dem2 = 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    ktao();
    while(ok)
    {
        if(check())
        {
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << endl;
        }
        sinh();
    }
    return 0;
}