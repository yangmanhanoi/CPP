#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while (t--)
    {
        string s;
        long long a,b;
        cin >> s >> a >> b;
        long long res = __gcd(a,b);
        for(int i = 0; i < res; i++)
        {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}