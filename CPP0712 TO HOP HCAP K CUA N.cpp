#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v;
void print()
{
    for(int i = 0; i < v.size() - 1; i++) cout << v[i];
    cout << v[v.size() - 1] << " ";
}
void Try(int i)
{
    if(v.size() == k)
    {
        print();
        return;
    }
    for(int j = i; j <= n; j++)
    {
        v.push_back(j);
        Try(j + 1);
        v.pop_back();
        
    }
}
int main()
{
	int t; cin >> t; while(t--)
	{
		cin >> n >> k;
    	Try(1);
    	cout << endl;
	}
    return 0;
}
