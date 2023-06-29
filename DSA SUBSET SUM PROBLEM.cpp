#include<bits/stdc++.h>
using namespace std;
int n, a[25], target = 0, check = 0;
void Try(int i, int sum = 0)
{
    if(sum > target) return;
    if(sum == target)
    {
        check++;
        return;
    }
    for(int j = i; j <= n; j ++)
    {
        Try(j + 1, sum + a[j]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        target += a[i];
    }
    if(target % 2 != 0) cout << "0\n";
    else
    {
        target /= 2;
        sort(a + 1, a + n + 1);
        Try(1);
        if(!check) cout << "0\n";
        else cout << "1\n";
    }
    return 0;

}