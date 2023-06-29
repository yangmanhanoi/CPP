#include<bits/stdc++.h>
using namespace std;
int n, m, a[15][15], check = 0;
int dx[2] = {1, 0};
int dy[2] = {0, 1};
vector<string> vs;
void Try(int i , int j)
{
    // Dieu kien nhan
    if(i == n - 1 and j == m - 1)
    {
        check ++;
        return;
    }
    // Nhanh can

    for(int k = 0; k < 2; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 and i1 < n and j1 >= 0 and j1 < m)
        {
            Try(i1, j1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    Try(0,0);
    cout << check << endl;
    return 0;
}