#include<bits/stdc++.h>
using namespace std;
int n, a[25], ok = 1;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void ktao()
{
    for(int i = 1; i <= n; i++) a[i] = 0;
}
void sinh()
{
    int i = n;
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
bool check()
{
    int l = n / 2;
    for(int i = 1; i <= n / 2; i++)
    {
        if(a[i] != a[n - i + 1]) return 0;
    }
    return 1;
}
int main()
{
    faster()
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
}