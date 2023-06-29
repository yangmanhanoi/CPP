#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        string s;
        cin >> s;
        int dem = 0;
        int pos = s.find("100");
        while(pos != -1)
        {
            dem++;
            s.erase(s.begin() + pos, s.begin() + pos + 3);
//            cout << s << endl;
            pos = s.find("100");
        }
        if(dem == 0) continue;
        else cout << dem*3 << endl;
    }
    return 0;
}