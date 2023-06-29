#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;cin.ignore();
    vector<string> v(n);
    vector<string> rem;
    for(int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    for(int i = 0; i < n; i++)
    {
        stringstream ss(v[i]);
        string tmp = "";
        string res;
        while(ss >> res)
        {
            for(int i = 0; i < res.size(); i++) res[i] = tolower(res[i]);
            tmp += res[0];
        }
        tmp = res + tmp;
        tmp.pop_back();
        rem.push_back(tmp);
    }
    map<string, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[rem[i]]++;
        if(mp[rem[i]] > 1) rem[i] += (mp[rem[i]] + '0');
        cout << rem[i] << "@ptit.edu.vn";
        cout << endl;
    }
    return 0;
}