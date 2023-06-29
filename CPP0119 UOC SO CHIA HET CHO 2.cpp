#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int sqr = sqrt(n);
    int dem = 0;
    for(int i = 1; i <= sqr; i++)
    {
        if(i == sqr and i % 2 == 0 and sqr*sqr == n) dem++;
        else
        {
            if(n % i == 0)
            {
                if(i % 2 == 0)
                {
                    if((n/i) % 2 == 0) dem += 2;
                    else dem += 1;
                }
                else{
                    if((n/i) % 2 == 0) dem +=1 ;
                }
            }
        }
    }
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while (t--)
    {
        /* code */
        int n; cin >> n;
        cout << count(n) << endl;
    }
    return 0;
}