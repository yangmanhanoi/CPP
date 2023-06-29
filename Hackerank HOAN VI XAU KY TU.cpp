#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s;
    sort(s.begin(), s.end());
    set<char> sc;
    for(auto &i : s) sc.insert(i);
    vector<char> vs;
    for(auto &i : sc) vs.push_back(i);
    do
    {
        for(int i = 0; i < sc.size(); i++) cout << vs[i];
        cout << endl;
    } while (next_permutation(vs.begin(),vs.end()));
    
}