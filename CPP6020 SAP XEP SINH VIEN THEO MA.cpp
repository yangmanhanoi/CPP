#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
        string ID, name, Class, email;
    public:
        friend istream& operator >> (istream& in, SinhVien &a);
        friend ostream& operator << (ostream& out, SinhVien a);
        friend bool cmp(SinhVien &a, SinhVien &b);
};
istream& operator >> (istream& in, SinhVien &a)
{
    in >> a.ID;
    cin.ignore();
    getline(in, a.name);
    in >> a.Class >> a.email;
    return in;
}
bool cmp(SinhVien &a, SinhVien &b)
{
    return a.ID < b.ID;
}
ostream& operator << (ostream& out, SinhVien a)
{
    out << a.ID << ' ' << a.name << ' ' << a.Class << ' ' << a.email;
    out << endl;
    return out;
}
int main()
{
    vector<SinhVien> vs;
    SinhVien a;
    while (cin >> a)
    {
        vs.push_back(a);
    }
    
    sort(vs.begin(),vs.end(), cmp);
    for(int i = 0; i < vs.size(); i++)
    {
        cout << vs[i];
    }
    return 0;
}