#include<bits/stdc++.h>
using namespace std;
int n, a[20][20], res = 1e9, used[20] = {}, tmp;
vector<int> v;
void print()
{
	for(int i = 0; i < n; i++) cout << v[i] << ' ';
	cout << endl;
}
void Try(int i, int sum = 0)
{
    // Dieu kien nhan
    if(v.size() == n)
    {
//        	print();
            tmp = sum + a[v[n - 1]][1];
        	res = min(res, tmp);
        
        return;
    }
    // Nhanh can
    if(sum > res) return;
    for(int j = 2; j <= n; j++)
    {
        if(used[j] == 0)
        {
            v.push_back(j);
            used[j] = 1;
            Try(i + 1, sum + a[v[v.size() - 1]][v[v.size() - 2]]);
            used[j] = 0;
            v.pop_back();
        }
    }  
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    v.push_back(1);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    } 
    Try(2);
    cout << res << endl;
    return 0;
}