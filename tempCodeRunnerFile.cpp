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
        map<int,int> m;
        for(auto &i : a)
        {
            m[i]++;
        }
        for(auto &i : b)
        {
            while(m[i] > 0)
            {
                cout << i << " ";
                m[i]--;
            }
        }
        for(auto &i : m)
        {
            if(m[i] != 0) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}