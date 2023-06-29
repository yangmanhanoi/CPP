#include<bits/stdc++.h>
using namespace std;
int n,b[20];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    set<int> s;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        s.insert(b[i]);
    }
    vector<int> a(s.size());
    for(auto j : s)
    {
        a.push_back(j);
    }
    vector<vector<int>> vs;
    do
    {
        vs.push_back(a);
    } while (next_permutation(a.begin(), a.end()));
    for(int i = vs.size() - 1; i >= 0; i--)
    {
        for(auto &j : vs[i]) cout << j << ' ';
        cout << endl;
    }
    return 0;
}
