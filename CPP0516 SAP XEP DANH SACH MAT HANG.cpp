#include<bits/stdc++.h>
using namespace std;
struct Product
{
    int ID;
    string name, type;
    double buy, sell;
};
void nhap(Product ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        ds[i].ID = i + 1;
        cin.ignore();
        getline(cin , ds[i].name);
        getline(cin, ds[i].type);
        cin >> ds[i].buy >> ds[i].sell;
    }
}
bool cmp(Product a, Product b)
{
    return (a.sell - a.buy) > (b.sell - b.buy);
}
void in(Product ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << ds[i].ID << ' ' << ds[i].name << ' ' << ds[i].type << ' ' << fixed << setprecision(2) << (ds[i].sell - ds[i].buy);
        cout << endl; 
    }
}
int main()
{
    int n; cin >> n;
    Product ds[n];
    nhap(ds, n);
    sort(ds, ds + n, cmp);
    in(ds,n);
    return 0;
}