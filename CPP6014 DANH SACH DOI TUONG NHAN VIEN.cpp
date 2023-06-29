#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
class NhanVien
{
    private:
        string ID, name,gender, birthday, address, feecode, date, day, month, year;
    public:
        friend istream& operator >> (istream& in, NhanVien &a);
        friend ostream& operator << (ostream& out, NhanVien a);
        friend bool cmp(NhanVien &a, NhanVien &b);
};
istream& operator >> (istream& in, NhanVien &a)
{
    cnt++;
    string s = to_string(cnt);
    while(s.size() < 5) s = "0" + s;
    a.ID = s;
    cin.ignore();
    getline(in, a.name);
    in >> a.gender >> a.birthday;
    cin.ignore();
    getline(in, a.address);
    in >> a.feecode >> a.date;
    stringstream ss(a.birthday);
    getline(ss, a.month, '/');
    getline(ss, a.day, '/');
    getline(ss, a.year, '/');
    return in;
}
bool cmp(NhanVien &a, NhanVien &b)
{
    {
            if(a.year < b.year) return 1;
            else if(a.year > b.year) return 0;
            else
            {
                if(a.month < b.month) return 1;
                else if(a.month > b.month) return 0;
                else{
                    return a.day < b.day;
                }
            }
        }
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds+n, cmp);
}
ostream& operator << (ostream& out, NhanVien a)
{
    out << a.ID << ' ' << a.name << ' ' << a.gender << ' ' << a.birthday << ' ' << a.address << ' ' << a.feecode << ' ' << a.date;
    out << endl;
    return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}