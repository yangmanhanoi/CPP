#include<bits/stdc++.h>
using namespace std;
int n, k, a[20], ok = 1;
void ktao()
{
    for(int i = 1; i <= k; i++) a[i] = i;
}
void sinh()
{
    int i = k;
    while(i >= 1 and a[i] == n - k + i)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    ktao();
    while (ok)
    {
        for(int i = 1; i <= k; i++) cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}