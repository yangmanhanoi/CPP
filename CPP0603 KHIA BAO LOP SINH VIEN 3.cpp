#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string ID = "B20DCCN001",name, Class,birthday;
        double GPA;
    public:
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        void chuanHoa(string&);
        string changeName(string&);
};
istream& operator >> (istream& in, SinhVien& a)
{
    getline(in, a.name);
    in >> a.Class >> a.birthday >> a.GPA;
    return in;
}
string SinhVien::changeName(string &s)
{
    string tmp = "";
    stringstream ss(s);
    while(ss >> s)
    {
        s[0] = toupper(s[0]);
        for(int i = 1 ; i < s.size(); i++) s[i] = tolower(s[i]);
        tmp += (s + " ");
    }
    s = tmp;
    return s;
}
void SinhVien::chuanHoa(string& s)
{
    if(s[1] == '/') s= "0" + s;
    if(s[4] == '/') s.insert(3, "0");
}
ostream& operator << (ostream& out, SinhVien a)
{
    a.chuanHoa(a.birthday);
    a.changeName(a.name);
    out << a.ID << ' ' << a.name << a.Class << ' ' << a.birthday << ' ' << fixed << setprecision(2) << a.GPA;
    return out;
} 
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}