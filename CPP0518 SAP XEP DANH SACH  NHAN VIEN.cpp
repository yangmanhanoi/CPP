#include<bits/stdc++.h>
using namespace std;
int dem = 0;
struct NhanVien
{
    string ID ,name,birthday,gender,address, fee,date, day, month, year;
};
void nhap(NhanVien &a)
{
    dem++;
    string s = to_string(dem);
    while(s.size() < 5) s = "0" + s;
    a.ID = s;
    cin.ignore();
    getline(cin, a.name);
    cin >> a.gender >> a.birthday;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.fee >> a.date;
    stringstream ss(a.birthday);
    getline(ss, a.month , '/');
    getline(ss, a.day, '/');
    getline(ss, a.year, '/');
}
bool cmp(NhanVien &a, NhanVien &b)
{
    if(a.year < b.year) return 1;
    else if(a.year > b.year) return 0;
    else{
        if(a.month < b.month) return 1;
        else if(a.month > b.month) return 0;
        else{
            return a.day < b.day;
        }
    }
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds+n, cmp);
}
void inds(NhanVien ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << ds[i].ID << ' ' << ds[i].name << ' ' << ds[i].gender << ' ' << ds[i].birthday << ' ' << ds[i].address << ' ' << ds[i].fee << ' ' << ds[i].date;
        cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}