#include<bits/stdc++.h>
using namespace std;
int n, ok = 1;
int v[10];
vector<int> b(10);
void ktao()
{
    for(int i = 1; i <= n; i++) v[i] = b[i-1] = 0;
}
void sinh()
{
    int i = n;
    while(i >= 1 and v[i] == 1) --i;
    if(i == 0) ok = 0;
    else
    {
        v[i] = 1;
        for(int j = i + 1; j <= n; j++) v[j] = 0;
    }
    for(int i = 1; i <= n; i++) b[i - 1] = v[i];
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    vector<vector<int>> vs;
    ktao();
    while(ok)
    {
        vs.push_back(b);
        sinh();
    }
    vector<string> a;
    for(int i = 1; i < vs.size(); i++)
    {
        string tmp = "";
        for(int j = 0; j < n; j++)
        {
            if(vs[i][j] == 1)
            {
                tmp += to_string(j + 1);
            }
        }
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a[i].size(); j++) cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}