#include<bits/stdc++.h>
using namespace std;
struct DaonhNghiep
{
    string maDN, tenDN;
    int soSV;
};
void nhap(DaonhNghiep &a)
{
    cin >> a.maDN;
    cin.ignore();
    getline(cin, a.tenDN);
    cin >> a.soSV;
}
bool cmp(DaonhNghiep &a, DaonhNghiep &b)
{
    if(a.soSV > b.soSV) return 1;
    else if (a.soSV < b.soSV) return 0;
    else
    {
        return a.maDN < b.maDN;
    }
}
void in(DaonhNghiep a)
{
    cout << a.maDN << ' ' << a.tenDN << ' ' << a.soSV;
}
int main()
{
    int n; cin >> n;
    DaonhNghiep a[n];
    for(int i = 0; i < n; i++) nhap(a[i]);
    sort(a, a+ n, cmp);
    int k; cin >>k;
    while(k--)
    {
        int x, y; cin >> x >> y;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:\n";
        for(int i = 0; i < n; i++)
        {
            if(a[i].soSV >= x and a[i].soSV <= y)
            {
                in(a[i]);
                cout << endl;
            }
        }
    } 
    return 0;
}