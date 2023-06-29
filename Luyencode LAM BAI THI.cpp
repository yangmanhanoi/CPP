#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n, k , a[30], ans = 0;
vector<int> v;
// prev : bài làm trước đó được chọn
void Try(int i,int prev, int Point = 0)
{
    if(i > k)
    {
        if(prev <= n)
        {
            ans = max(ans, Point);
            return;
        }
    }
    for(int j = prev + 1; j <= prev + 2; j++)
    {
        if(j <= n)
        Try(i + 1,j, Point + a[j]);
    }
}
int main()
{
    faster()
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Try(1,0);
    cout << ans << endl;
    return 0;
}