#include<bits/stdc++.h>
using namespace std;
int n, ok = 1;
string s = "";
void ktao()
{
    for(int i = 0; i < n-1; i++) s += '0';
    s += '8';
}
void sinh()
{
    int i = n-1;
    while(i >= 0 and s[i] == '8') --i;
    if(i == -1) ok = 0;
    else
    {
        s[i] = '8';
        for(int j = i + 1; j < n; j++) s[j] = '0';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    n = 19;
    vector<string> vs;
    ktao();
    while(ok)
    {
        vs.push_back(s);
        sinh();
    }
    int t; cin >> t; while (t--)
    {
        int k; cin >> k;
        for(int i = 0; i < vs.size(); i++)
        {
            if(stoll(vs[i]) % k == 0)
            {
                cout << stoll(vs[i]) << endl;
                break;
            }
        }
    }
    return 0;
}