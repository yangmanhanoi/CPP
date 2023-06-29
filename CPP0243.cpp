#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; while(t--)
    {
        int n , m;
        cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int j = 0; j < m; j++) cin >> b[j];
        map<int,int> mp;
        for(auto &i : a)
        {
            mp[i]++;
        }
        for(auto &i : b)
        {
            while(mp[i] > 0)
            {
                cout << i << " ";
                mp[i]--;
            }
        }
        for(auto &i : mp)
        {
            if(i.second > 0)
            {
                cout << i.first << " ";
                i.second--;
            }
        }
        cout << endl;
    }
    return 0;
}