#include<bits/stdc++.h>
using namespace std;
int n, S , a[35], res = 1E9, cnt = 0;
vector<int> vs;
void Try(int i, int sum = 0)
{
    if(sum > S) return;
    else if(sum == S)
    {
        int tmp = vs.size();
        res = min(res, tmp);
        cnt++;
        return;
    }
    for(int j = i; j <= n; j++)
    {
        vs.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        vs.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> S;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1);
    if(cnt == 0)cout << "-1\n";
    else cout << res << endl;
    return 0;
}