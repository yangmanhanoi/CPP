#include<bits/stdc++.h>
using namespace std;
int f[1000005] = {};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i = 0; i <= 1000000; i++) f[i] = 1;
    f[0] = f[1] = 0;
    for(int i = 2; i <= 1000; i++)
    {
        if(f[i] == 1)
        {
            for(int j = i * i; j <= 1000000; j+= i)
            {
                f[j] = 0;
            }
        }
    }
    int t; cin >> t; while(t--)
    {
        long long l, r;
        cin >> l >> r;
        long long x = sqrt(l) + 1, y = sqrt(r);
        long long cnt = 0;
        for(int i = x; i <= y; i++)
        {
            if(f[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}