#include<bits/stdc++.h>
using namespace std;
int n;
int check(vector<int> v)
{
    int flag = 1;
    for(int i = 0; i < n-1; i++)
    {
        if(abs(v[i+1] - v[i]) == 1)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) v.push_back(i + 1);
    vector<vector<int>> vs;
    do
    {
        if(check(v)) vs.push_back(v);
    } while (next_permutation(v.begin(),v.end()));
    for(auto &i : vs)
    {
        for(auto &j : i) cout << j;
        cout << endl;
    }
    return 0;
}