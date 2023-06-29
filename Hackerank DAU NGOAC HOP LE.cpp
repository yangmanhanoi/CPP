#include<bits/stdc++.h>
using namespace std;
int n, ok = 1;
string s = "";
vector<string> vs;
void ktao()
{
    for(int i = 0; i < n; i++) s += "(";
}
bool check(string &s)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(') cnt++;
        else cnt--;
        if(cnt == -1) return 0;
    }
    return cnt == 0;
}
void sinh()
{
    int i = n - 1;
    while(i >= 0 and s[i] == ')')
    {
        --i;
    }
    if(i == -1) ok = 0;
    else
    {
        s[i] = ')';
        for(int j = i + 1; j < n;j++)
        {
            s[j] = '(';
        }
    }
    if(check(s))
    {
        vs.push_back(s);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    if(n % 2 != 0) cout << "NOT FOUND";
    else if(n == 2) cout << "()";
    else
    {
        ktao();
        while(ok)
        {
            sinh();
        }
        sort(vs.begin(),vs.end());
        for(auto &i : vs)
        {
            cout << i << endl;
        }
    }
    return 0;
}