#include<bits/stdc++.h>
using namespace std;
int f[10005] = {};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i = 0; i <= 10000; i++) f[i] = 1;
    f[0] = f[1] = 0;
    for(int i = 2; i <= 100; i++)
    {
        if(f[i] == 1)
        {
            for(int j = i*i; j <= 10000; j += i)
            {
                f[j] = 0;
            }
        }
    }
    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            if(i == 1) cout << 1 << ' ';
            else if(i % 2 == 0) cout << 2 << ' ';
            else if(f[i] == 1) cout << i << ' ';
            else
            {
                for(int j = 3; j <= i; j++)
                {
                    if(i %j == 0 and f[j] == 1)
                    {
                        cout << j << ' ';
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}