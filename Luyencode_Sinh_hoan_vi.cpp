#include<bits/stdc++.h>
using namespace std;
int n,used[10] = {};
vector<int> v;
void print()
{
    for(int i = 0; i < v.size() - 1; i++) cout << v[i];
    cout << v[v.size() - 1] << " ";
}
void Try(int i)
{
    if(v.size() == n)
    {
        print();
        return;
    }
    for(int j = 1; j <= n; j++)
    {
        if(used[j] == 0)
        {
            v.push_back(j);
            used[j] = 1;
            Try(i + 1);
            used[j] = 0;
            v.pop_back();
        }
    }
}
int main()
{
	int t; cin >> t; while(t--)
	{
		cin >> n;
    	Try(1);
    	cout << endl;
	}
    return 0;
}
