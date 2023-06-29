#include<bits/stdc++.h>
using namespace std;
int n, ok = 1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    do
    {
        for(int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}