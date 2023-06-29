#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int a[n], b[n], c[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        b[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            b[i] = b[i - 1] + a[i];
        }
        c[n - 1] = a[n - 1];
        for(int i = n - 2; i >= 0; i--)
        {
            c[i] = c[i + 1] + a[i];
        }
        int check = -1;
        for(int i = 0; i < n; i++)
        {
            if(b[i] == c[i])
            {
                check = i + 1;
                break;
            }
        }
        cout << check << endl;
    }
    return 0;
}