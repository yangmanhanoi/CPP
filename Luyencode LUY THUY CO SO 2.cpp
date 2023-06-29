#include<bits/stdc++.h>
using  namespace std;
#define ll long long
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll binMul(int a, ll b)
{
    if(b < 0) return 0;
    if(b == 0) return 1;
    if(b == 1) return a;
    ll tmp = binMul(a, b / 2);
    if(b % 2 == 0) return (tmp*tmp) % 30;
    else return (a * ((tmp * tmp) % 30)) % 30;
}
int main()
{
    faster()
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0;
    int t; cin >> t;
    int b[t];
    for(int i = 0; i < t; i++) cin >> b[i];
    sort(b, b + t);
    for(int i = 0; i < t; i++)
    {
        int pos = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        if(pos == n) pos = -2;
        cout << pos + 1 << " ";
        sum += (pos + 1);
        sum %= 30;
    }
    if(sum < 0) cout << 0;
    else
    {
        cout << (ll)pow(2,sum);
    }
    cout << endl;
    return 0;
}