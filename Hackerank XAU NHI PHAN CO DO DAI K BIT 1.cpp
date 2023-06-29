#include<bits/stdc++.h>
using namespace std;
int n,k, ok = 1;
int b[20];
vector<int> a(20);
void ktao()
{
    for(int i = 1; i <= n; i++)
    {
        b[i] = a[i - 1] = 0;
    }
}
void sinh()
{
    int i = n;
    while(i >= 1 and b[i] == 1)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        b[i] = 1;
        for(int j = i + 1; j <= n; j++) b[j] = 0;
    }
    for(int i = 0; i < n; i++) a[i] = b[i + 1];
}
bool check_k_bit(vector<int> a,int k)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1) dem++;
    }
    return dem == k;
}
bool check_lt(vector<int> a, int k)
{
    int cnt = 0;
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        while(a[i] == 1)
        {
            dem++;
            i++;
        }
        if(dem > k) return 0;
        if(dem == k) cnt++;
        dem = 0;
    }
    return cnt == 1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    ktao();
    vector<vector<int>> vs;
    while (ok)
    {
        vs.push_back(a);
        sinh();
    }
    for(int i = 0; i < vs.size(); i++)
    {
        if(check_k_bit(vs[i],k))
        {
            for(int j = 0; j < n; j++) cout << vs[i][j];
            cout << ' ';
        }
    }
    cout << endl;
    for(int i = 0; i < vs.size(); i++)
    {
        if(check_lt(vs[i], k))
        {
            for(int j = 0; j < n; j++) cout << vs[i][j];
            cout << ' ';
        }
    }
    return 0;
}