// #include<bits/stdc++.h>
// using namespace std;
// int n, used[15] = {};
// vector<int> v;
// void print()
// {
//     for(int i = 0; i < v.size(); i++) cout << v[i];
//     cout << endl;
// }
// bool check()
// {
//     for(int i = 0; i < v.size() - 1; i++)
//     {
//         if(abs(v[i] - v[i + 1]) == 1) return 0;
//     }
//     return 1;
// }
// void Try(int i)
// {
//     if(v.size() == n)
//     {
//         if(check() == 1) print();
//         return;
//     }
//     for(int j = 1; j <= n; j++)
//     {
//         if(used[j] == 0)
//         {
//             v.push_back(j);
//             used[j] = 1;
//             Try(i + 1);
//             v.pop_back();
//             used[j] = 0;
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//     cin >> n;
//     Try(1);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int n, cnt = 0;
vector<string> v;
void print()
{
    for(int i = 0; i < v.size(); i++) cout << v[i];
    cout << endl;
}
bool check(vector<string> s)
{
    int dem = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == "(") dem++;
        else if(s[i] == ")") dem--;
        if(dem < 0) return 0;
    }
    if(dem > 0) return 0;
    return 1;
}
void Try(int i)
{
    if(v.size() == n)
    {
        if(check(v))
        {
            print();
            cnt++;
            return;
        }
    }
    for(int j = 0; j <= 1; j++)
    {
        if(j == 0) v.push_back("(");
        else v.push_back(")");
        Try(i + 1);
        v.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    Try(1);
    cout << cnt << endl;
    return 0;
}