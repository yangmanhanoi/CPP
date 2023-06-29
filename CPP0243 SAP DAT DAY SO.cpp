#include<bits/stdc++.h>
using namespace std;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
ll Sum(ll a, ll b, ll c)
{
    if(b == 1) return a;
    if(b == 0) return 0;
    ll tmp = Sum(a,b/2,c);
    tmp = tmp + tmp;
    tmp %= c;
    if(b % 2 == 0) return tmp;
    else return (tmp + a) % c;
}
int main()
{
    faster()
    test()
    {
        ll a,b,c;
        cin >> a >> b >> c;
        cout << Sum(a,b,c) << endl;
    }
}