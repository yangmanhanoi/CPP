#include<bits/stdc++.h>
using namespace std;
int n, k, a[20];
vector<int> vs;
void print()
{
    cout << "[";
    for(int i = 0; i < vs.size() - 1; i++) cout << vs[i] << ' ';
    cout << vs[vs.size() - 1] << "]";
    cout << endl;
}
void Try(int i, int sum = 0)
{
    if(sum > k) return;
    else if(sum == k)
    {
        print();
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
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1);
    return 0;
}