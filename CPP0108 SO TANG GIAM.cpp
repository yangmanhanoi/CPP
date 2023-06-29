#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int n)
{
    if(n == 1 or n == 0) return 0;
    else if(n == 2 or n == 3) return 1;
    else if(n % 2 == 0 or n % 3 == 0) return 0;
    int sqr = sqrt(n);
    for(int i = 5; i <= sqr; i += 6)
    {
        if(n % i == 0 or n % (i + 2) == 0) return 0;
    }
    return 1;
}
bool checkIncr(int n)
{
    int tmp1 = n % 10;
    n /= 10;
    int tmp2 = n % 10;
    n /= 10;
    if(tmp1 <= tmp2) return 0;
    else
    {
        while (n > 0)
        {
            tmp1 = tmp2 ;
            tmp2 = n % 10;
            n /= 10;
            if(tmp1 <= tmp2) return 0;
        }
    }
    return 1;
}
bool checkDecr(int n)
{
    int tmp1 = n % 10;
    n /= 10;
    int tmp2 = n % 10;
    n /= 10;
    if(tmp1 >= tmp2) return 0;
    else
    {
        while (n > 0)
        {
            tmp1 = tmp2 ;
            tmp2 = n % 10;
            n /= 10;
            if(tmp1 >= tmp2) return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int l = 1, r = 1;
        int k = 0;
        while(k < n)
        {
            r *= 10;
            k++;
        }
        l = r / 10;
        int dem = 0;
        for(int i = l; i < r; i++)
        {
            if(checkDecr(i) or checkIncr(i))
            {
                if(checkPrime(i)) dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}