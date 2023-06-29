#include<bits/stdc++.h>
using namespace std;
int n, k, a[25], check = 0;
vector<int> v;
vector<vector<int>> ans;
void Try(int i, int sum = 0)
{
    if(sum == k)
    {
        check++;
        ans.push_back(v);
        return;
    }
    if(sum > k) return;
    for(int j = i; j <= n; j++)
    {
        v.push_back(a[j]);
        Try(j, sum + a[j]);
        v.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1);
    if(check == 0) cout << "-1\n";
    else
    {
        cout << check << endl;
        for(auto &i : ans)
        {
            cout << "{";
            for(int j = 0; j < i.size() - 1; j++)
            {
                cout << i[j] << ' ';
            }
            cout << i.back() << "}\n";
        }
    }
    return 0;
}