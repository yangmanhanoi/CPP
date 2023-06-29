#include<bits/stdc++.h>
using namespace std;
int f[100000] = {};
int sumNum(int n)
{
    int res = 0;
    while(n)
    {
        int tmp = n % 10;
        res += tmp;
        n /= 10;
    }
    return res;
}
int main()
{
    for(int i = 0; i <= 100000; i++) f[i] = 1;
    f[0] = f[1] = 0;
    for(int i = 2; i <= 1000;i++)
    {
        if(f[i])
        {
            for(int j = i*i; j <= 100000; j++) f[j] = 0;
        }
    }
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        if(f[n])
        {
            cout << "NO\n";
        }
        else
        {
            int res1 = sumNum(n);
            int res2 = 0, sqr = sqrt(n);
            for(int i = 2; i <= sqr; i++)
            {
                if(n % i == 0)
                {
                    int cnt = 0;
                    while(n %i == 0)
                    {
                        n /= i;
                        cnt++;
                    }
                    res2 += sumNum(i)*cnt;
                }
            }
            if(n > 1) res2 += sumNum(n);
            if(res1 == res2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}