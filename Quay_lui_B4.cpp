#include<bits/stdc++.h>
using namespace std;
int n, k, a[20], ans = 1E9;
vector<int> v;
void Try(int i, int sum = 0)
{
    if(sum > k) return;
    if(sum == k)
    {
        int tmp = v.size();
        ans = min(ans,tmp);
        return;
    }
    for(int j = i; j <= n; j++)
    {
        v.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        v.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        Try(1);
        cout << ans << endl;
        ans = 1E9;
    }
    return 0;
}