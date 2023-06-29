#include<bits/stdc++.h>
using namespace std;
int n, a[10005], ok = 1;
void sinh()
{
    int i = n - 1;
    while (i >= 1 and a[i] >= a[i + 1])
    {
        i--;
    }
    if(i == 0) ok = 0;
    else
    {
        int j = n;
        while(a[j] <= a[i]) j--;
        swap(a[i],a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s; cin >> s;
    n = s.size();
    for(int i = 1; i <=n; i++) a[i] = s[i - 1] - '0';
    sinh();
    if(!ok)
    {
        cout << "NOT EXIST";
    }
    else
    {
        for(int i = 1; i <= n; i++) cout << a[i];
    }
    cout << endl;
    return 0;
}