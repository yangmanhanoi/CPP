#include<bits/stdc++.h>
using namespace std;
char c;
int n, ok = 1, index;
vector<int> v(10);
void ktao()
{
    v[0] = 65 + index;
    for(int i = 1; i < n; i++) v[i] = 65;
}
void sinh()
{
    int i = n - 1;
    while(i >= 1 and v[i] == (int)(c)) --i;
    if(i == 0) ok = 0;
    else
    {
        v[i]++;
        for(int j = i + 1; j , n; j++) v[j] = 65;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> c >> n;
    index = 0;
    while(index < ((int)(c) - 64))
    {
        ktao();
        while(ok)
        {
            for(int i = 0; i < n; i++) cout << (char)v[i];
            cout << endl;
            sinh();
        }
        ok = 1;
        index++;
    }
    return 0;
}