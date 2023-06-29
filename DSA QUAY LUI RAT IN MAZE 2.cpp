#include<bits/stdc++.h>
using namespace std;
int n, a[15][15], check = 0;
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
string ds[4] = {"D", "L", "R", "U"};
vector<string> vs;
void print()
{
    for(int i = 0; i < vs.size(); i++) cout << vs[i];
}
void Try(int i, int j)
{
    a[0][0] = 0;
    if(i == n - 1 and j == n - 1)
    {
        
        print();
        cout << endl;
        check++;
        return;
    }
    for(int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 and i1 < n and j1 >= 0 and j1 < n and a[i1][j1] == 1)
        {
            a[i1][j1] = 0;
            vs.push_back(ds[k]);
            Try(i1, j1);
            a[i1][j1] = 1;
            vs.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    Try(0,0);
//    cout << check << endl;
    if(check == 0) cout << "-1\n";
    return 0;
}