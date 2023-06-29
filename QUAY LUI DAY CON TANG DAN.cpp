#include<bits/stdc++.h>
using namespace std;
int n, a[25];
vector<int> vs;
vector<string> vstr;
void Try(int i)
{
    if(vs.size() > 1)
    {
        string tmp = "";
        for(int i = 0; i < vs.size(); i++)
        {
            tmp += to_string(vs[i]) + ' ';
        }
        vstr.push_back(tmp);
    }
    for(int j = i; j <= n; j++)
    {
        if(vs.empty() or a[j] > vs[vs.size() - 1])
        {
            vs.push_back(a[j]);
            Try(j + 1);
            vs.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Try(1);
    sort(vstr.begin(),vstr.end());
    for(int i = 0; i < vstr.size(); i++)
    {
        for(auto &j : vstr[i]) cout << j;
        cout << endl;
    }
    return 0;
}