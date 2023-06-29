#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while (t--)
    {
        /* code */
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >>  a[i];
        }
        while(prev_permutation(a, a + n))
        {
            for(int i = 0; i < n; i++) cout << a[i] << " ";
            break;
        }
        cout << endl;
    }
    return 0;
}