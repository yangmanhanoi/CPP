#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
        string ID, name, Class, email;
    public:
        friend istream& operator >> (istream& in, SinhVien &a);
        friend ostream& operator << (ostream& out, SinhVien a);
        friend char getMajor(SinhVien a);
        friend char checkCLC(SinhVien a);
};
istream& operator >> (istream& in, SinhVien &a)
{
    in >> a.ID;
    cin.ignore();
    getline(in, a.name);
    in >> a.Class >> a.email;
    return in;
}
char getMajor(SinhVien a)
{
    return a.ID[5];
}
char checkCLC(SinhVien a)
{
    return a.Class[0];
}
ostream& operator << (ostream& out, SinhVien a)
{
    out << a.ID << ' ' << a.name << ' ' << a.Class << ' ' << a.email;
    return out;
}
int main()
{
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int k; cin >> k;cin.ignore();
    while(k--)
    {
        string s;
        getline(cin , s);
        for(auto &i : s) i = toupper(i);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for(int i = 0; i < n; i++)
        {
            if(checkCLC(a[i]) == 'E' and (getMajor(a[i]) == 'A' or getMajor(a[i]) == 'C')) continue;
            if(getMajor(a[i]) == s[0]) cout << a[i] << endl;
        }
    }
    return 0;
}