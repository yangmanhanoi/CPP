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
    while(i >= 0 and s[i] == '8')
    {
        s[i] = '6';
        --i;
    }
    if(i == -1) ok = 0;
    else
    {
        s[i] = '8'; 
    }
}
bool cmp(string &a, string &b)
{
    if(a.size() < b.size()) return 1;
    else if (a.size() > b.size()) return 0;
    else
    {
        return a < b;
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
    n = 2;
    while(n <= 15)
    {
        ok = 1;
        for(int i = 0; i < n; i++) s += "6";
        while (ok)
        {
            if(check(s)) vs.push_back(s);
            sinh();
        }
        n += 2;
        s = "";
    }
    sort(vs.begin(), vs.end(), cmp);
    for(int i = 0; i < x; i++)
    {
        cout << vs[i] << ' ';
    }
    return 0;
}