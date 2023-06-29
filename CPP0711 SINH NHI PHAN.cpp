#include<bits/stdc++.h>
using namespace std;
int n, a[25];
vector<int> v;
void print()
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << " ";
}
void Try(int i)
{
    if(v.size() == n)
    {
        print();
        return;
    }
    for(int j = 0; j <= 1; j++)
    {
        v.push_back(j);
        Try(i+1);
        v.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}