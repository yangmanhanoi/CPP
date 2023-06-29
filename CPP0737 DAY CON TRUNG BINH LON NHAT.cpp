#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int k, n;
        cin >> n >> k;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        long long b[n];
        b[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            b[i] = b[i - 1] + a[i];
        }
        int l, r;
        long long res = b[k - 1], tmp;
        for(int i = k; i < n; i++)
        {
            tmp = b[i] - a[i - k];
            if(tmp > res)
            {
                res = tmp;
                r = i;
                l = i - k + 1;
            }
        }
        for(int i = l; i <= r; i++) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}