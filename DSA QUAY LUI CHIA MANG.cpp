#include<bits/stdc++.h>
using namespace std;
int n, k, s ,a[25], sum = 0, cnt = 0;
vector<int> v;
void Try(int i,int sum = 0)
{
    for(int j = i; j <= n; j++)
    {
        if(sum + a[j] <= s)
        {
            v.push_back(a[j]);
            if(sum + a[j] == s) cnt++;
            Try(i + 1, sum + a[j]);
        }
        else 
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if(s % k != 0)
    {
        cout << "0\n";
    }
    else
    {
        s /= k;
        Try(1);
        if(cnt == k) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}