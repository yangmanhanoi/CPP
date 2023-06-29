#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int x,n, ok = 1;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s = "";
void sinh()
{
    int i = n - 1;
    while(i >= 0 and s[i] == '1')
    {
        s[i] = '0';
        --i;
    }
    if(i == -1) ok = 0;
    else
    {
        s[i] = '1'; 
    }
}
bool check(string &s)
{
    int l = s.size() / 2;
    for(int i = 0; i <= l; i++)
    {
        if(s[i] != s[s.size() - i - 1]) return 0;
    }
    return 1;
}
int main()
{
    faster()
    cin >> x;
    vector<string> vs;
    n = 1;
    while(n <= x/2)
    {
        string tmp;
        ok = 1;
        for(int i = 0; i < n; i++) s += "0";
        while (ok)
        {
            tmp = s;
            reverse(tmp.begin(),tmp.end());
            vs.push_back(s + tmp);
            sinh();
        }
        n ++;
        s = "";
    }
    sort(vs.begin(), vs.end());
    for(auto &i : vs)
    {
        cout << i << endl;
    }
    return 0;
}