#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test() int t; cin >> t; while(t--)
#define ll long long
int main()
{
    faster()
    test()
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int min1 = 1e9, min2= 1e9, min3 = 1e9;
// min1 : luu gia tri nho nhat
// min2 : luu gia tri nho thu 2
// min 3: luu gia tri nho thu 3
        for(int i = 0; i < n; i++)
        {
            if(a[i] < min1)
            {
                min3 = min2;
                min2 = min1;
                min1 = a[i];
            }
            else if(a[i] < min2)
            {
                min3 = min2;
                min2 = a[i];
            }
            else if(a[i] < min3)
            {
                min3 = a[i];
            }
        }
        cout << min1 + min2 + min3 << endl;
    }
    return 0;
}