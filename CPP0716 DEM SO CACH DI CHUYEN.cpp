#include<bits/stdc++.h>
using namespace std;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n, k, a[25][25], ans;
int f1[2] = {1,0};
int f2[2] = {0, 1};
void Try(int i,int j, int sum = a[0][0])
{
    // Nhánh cận
    if(sum > k) return;
    // Điều kiện nhận giá trị
    if(sum == k and i == n - 1 and j == n - 1)
    {
        ans++;
        return;
    }
    // Di chuyển từng bước
    for(int k = 0; k < 2; k++)
    {
        int i1 = i + f1[k];
        int j1 = j + f2[k];
        if(i1 < n and j1 < n)
        {
            Try(i1,j1,sum + a[i1][j1]);
        }
    }
}
int main()
{
    faster()
    test()
    {
        cin >> n >> k;
        for(int i = 0;i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        ans = 0;
        Try(0,0);
        cout << ans << endl;
    }
    return 0;
}