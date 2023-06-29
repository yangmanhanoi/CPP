#include<bits/stdc++.h>
using namespace std;
char c, n;
int check(string &s)
{
    int flag = 1;
    if(s.size() <= 4)
    {
        if(s[0] != 'A' and s[s.size() - 1] != 'A') flag = 0;
    }
    else
    {
        if(s.find("AE") == string::npos and s.find("EA") == string::npos)
        {
            if((s[0] != 'A' and s[0] != 'E') or (s[s.size() - 1] != 'A' and s[s.size() - 1] != 'E')) flag = 0;
        }
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> c;
    n = (int)c - 64;
    vector<string> vs;
    string s;
    for(int i = 0; i < n; i++) s += char(65 + i);
    do
    {
        if(check(s)) vs.push_back(s);
    } while (next_permutation(s.begin(),s.end()));
    for(auto &i : vs)
    {
        cout << i << endl;
    }
    return 0;
}