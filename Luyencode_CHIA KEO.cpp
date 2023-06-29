#include<bits/stdc++.h>
using namespace std;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
int n, m, ans = 0;
/*
+ i: Người sẽ xét để chia kẹo
+ prev: Số kẹo đã chia cho người trước đó
+ remain: Số kẹo còn lại
*/
void Try(int i, int prev, int remain)
{
    // Điều kiện nhận kết quả: là tất cả số trẻ em đc chia hết và không còn lại một cái kẹo nào
    if(i > n)
    {
        if(remain == 0)
        {
            ans++;
        }
        return;
    }
    for(int j = prev; j >= 1; j--)
    {
        if(remain > 0)
        Try(i + 1, j, remain - j);
    }
}
int main()
{
    cin >> n >> m;
    int k = m - n + 1;
    Try(1,k,m);
    cout << ans << endl;
    int a = m/n;
    int b = m % n;
    for(int i = 1; i <= b; i++)
    {
        cout << a + 1 << " ";
    }
    for(int i = b + 1; i <= n; i++)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
