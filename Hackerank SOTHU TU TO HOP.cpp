#include<bits/stdc++.h>
using namespace std;
int n,k,a[20], ok = 1;

vector<int> b(20);
void ktao()
{
    for(int i = 1; i <= k; i++) b[i] = i;
}
void sinh()
{
    int i = k;
    while(i >= 1 and b[i] == n - k + i) --i;
    if(i == 0) ok = 0;
    else
    {
        b[i]++;
        for(int j = i + 1; j <= k; j++) b[j] = b[j - 1] + 1;
    }
}
bool check(int a[],vector<int> b, int k)
{
    for(int i = 1; i <= k; i++)
    {
        if(a[i] != b[i]) return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= k; i++) cin >> a[i];
    int cnt = 1;
    vector<vector<int>> vs;
//    vector<int> tmp;
    ktao();
    while (ok)
    {
//        for(int i = 0; i < k; i++) tmp.push_back(b[i+1]);
        vs.push_back(b);
        sinh();
    }
    for(int i = vs.size() - 1; i >= 0; i--)
    {
        if(check(a,vs[i], k)) break;
        cnt++;
    }
    cout << cnt++;
    return 0;
}