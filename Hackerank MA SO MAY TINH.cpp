#include<bits/stdc++.h>
using namespace std;
int n, ok = 1;
vector<int> v;
void ktao()
{
    for(int i = 0; i < n; i++) v.push_back(1);
}
void sinh()
{
    int i = n - 1;
    while(i >= 0 and v[i] == n) --i;
    if(i == -1) ok = 0;
    else
    {
        v[i]++;
        for(int j = i + 1; j < n; j++) v[j] = 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    vector<vector<int>> a;
    ktao();
    while(ok)
    {
        a.push_back(v);
        sinh();
    }
    vector<string> vs;
    string s = "";
    for(int i = 0; i < n; i++) s += char(65 + i);
    do
    {
        vs.push_back(s);
    } while (next_permutation(s.begin(),s.end()));
    for(auto &i : vs)
    {
        for(auto &j : a)
        {
            cout << i;
            for(auto &x : j) cout << x;
            cout << endl;
        }
    }
    return 0;
}