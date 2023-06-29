#include<bits/stdc++.h>
using namespace std;
int k, n, a[10], ok = 1;
void ktao()
{
    for(int i = 1; i <= n; i++) a[i] = 1;
}
void sinh()
{
    int i = n;
    while(i >= 1 and a[i] == k)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]++;
        for(int j = i + 1; j <= n; j++) a[j] = 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> k >> n;
    ktao();
    while (ok)
    {
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}