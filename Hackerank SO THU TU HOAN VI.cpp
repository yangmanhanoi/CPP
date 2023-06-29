#include<bits/stdc++.h>
using namespace std;
int n, a[20], b[20];
bool check(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i]) return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int cnt = 0;
    do
    {
        cnt++;
        if(check(a,b,n)) break;
    } while(next_permutation(b,b + n));
    cout << cnt << endl;
    return 0;
}