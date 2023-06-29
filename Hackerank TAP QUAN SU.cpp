#include<bits/stdc++.h>
using namespace std;
int n, k, a[1005],cnt = 0, ok = 1;
vector<int> s1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= k; i++) cin >> a[i];
    for(int i = 1; i <= k; i++)
    {
        s1.push_back(a[i]);
    }
    int i = k;
    while(i >= 1 and a[i] == n - k + i)
    {
        --i;
    }
    if(i == 0) cnt = k;
    else
    {
        a[i]++;
        for(int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for(int i = 0; i < k; i++)
        {
            if(s1[i] != a[i+1]) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}