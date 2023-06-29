#include<bits/stdc++.h>
using namespace std;
int n, ok = 1;
char a[20];
void ktao()
{
    for(int i = 1; i <= n; i++) a[i] = 'B';
}
void sinh()
{
    int i = n;
    while(i >= 1 and a[i] == 'A')
    {
        --i;
    }
    if(i == 0) ok = 0;
    else{
        a[i] = 'A';
        for(int j = i + 1; j <= n; j++) a[j] = 'B';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    ktao();
    while (ok)
    {
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
        sinh(); 
    }
    return 0;
}