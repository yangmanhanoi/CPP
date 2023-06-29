#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
        string ID, name, Class,email;
    public:
        friend istream& operator >> (istream& in, SinhVien &a);
        friend ostream& operator << (ostream& out, SinhVien a);
        friend bool cmp(SinhVien& a, SinhVien &b);
        friend string getYear(SinhVien a);
};
istream& operator >> (istream& in, SinhVien &a)
{
    in >> a.ID;
    cin.ignore();
    getline(in, a.name);
    in >> a.Class >> a.email;
    return in;
}
string getYear(SinhVien a)
{
    string s = a.Class.substr(1,2);
    return s;
}
ostream& operator << (ostream& out, SinhVien a)
{
    out << a.ID << ' ' << a.name << ' ' << a.Class << ' ' << a.email;
    return out;
}
int main()
{
    int n ; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int k; cin >> k;
    while(k--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
        for(int i = 0; i < n; i++)
        {
            if(getYear(a[i]) == s.substr(2,2))
            {
                cout << a[i];
                cout << endl;
            }
        }
    }
    return 0;
}