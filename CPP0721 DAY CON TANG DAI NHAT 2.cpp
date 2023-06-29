#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int b[n] = {1};
        int rem = a[0];
        for(int i = 1; i < n; i++)
        {
            if(a[i] > rem)
            {
                b[i] = b[i - 1] + 1;
                rem = a[i];
            }
            else
            {
                b[i] = b[i - 1];
            }
        }
        cout << b[n - 1] << endl;
    }
    return 0;
}
