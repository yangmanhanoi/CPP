#include<bits/stdc++.h>
using namespace std;
int n, k , S, cnt = 0;
vector<int> vs;
void Try(int i, int sum = 0)
{
    if(sum > S) return;
    else if(vs.size() == k)
    {
        if(sum == S) cnt++;
        return;
    }
    for(int j = i; j <= n; j++)
    {   
        vs.push_back(j);    
        Try(j + 1, sum + j);
        vs.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k >> S;
    Try(1);
    cout << cnt << endl;
    return 0;
}