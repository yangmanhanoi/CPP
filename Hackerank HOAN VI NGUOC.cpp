#include<bits/stdc++.h>
using namespace std;
int n, a[20], ok = 1;
void ktao()
{
    for(int i = 1; i <= n; i++) a[i] = n - i + 1;
}
void sinh()
{
    int i = n - 1;
    while(i >= 1 and a[i] < a[i + 1])
    {
        --i;
    }
    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[j] > a[i]) --j;
        swap(a[i],a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    ktao();
    while(ok)
    {
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}