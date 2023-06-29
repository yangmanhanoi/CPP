#include<bits/stdc++.h>
using namespace std;
int n, dem , ok = 1;
int a[25];
void ktao()
{
    a[1] = n;
    dem = 1;
}
void sinh()
{
    int i = dem;
    while(i >= 1 and a[i] == 1)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]--;
        int thieu = dem - i + 1;
        dem = i;
        int q = thieu / a[i];
        int r = thieu % a[i];
        if(q)
        {
            for(int j = 1; j <= q; j++) a[++dem] = a[i];
        }
        if(r)
        {
            a[++dem] = r;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    vector<vector<int>> vs;
    ktao();
    while(ok)
    {
        vector<int> tmp;
        for(int i = 1; i <= dem; i++) tmp.push_back(a[i]);
        vs.push_back(tmp);
        sinh();
    }
    cout << vs.size() << endl;
    for(int i = 0; i < vs.size(); i++)
    {
        for(int j = 0; j < vs[i].size() - 1; j++) cout << vs[i][j] << "+";
        cout << vs[i][vs[i].size() - 1] << endl;
    }
    return 0;
}