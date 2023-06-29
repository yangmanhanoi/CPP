#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
struct GiangVien
{
    string ID = "GV", name,fakename, Subject;
};
void nhap(GiangVien &a)
{
    cnt++;
    string s = to_string(cnt);
    while(s.size() < 2) s = "0" + s;
    a.ID += s;
    getline(cin, a.name);
    getline(cin,a.Subject);
}
void change(string &s)
{
    string tmp = "";
    stringstream ss(s);
    while(ss >> s)
    {
        tmp += toupper(s[0]);
    }
    s = tmp;
}
void getFake(GiangVien &a)
{
    string s = a.name;
    string tmp = "";
    stringstream ss(s);
    while(ss >> s)
    {
        for(int i = 0; i < s.size();i++) s[i] = tolower(s[i]);
        tmp += s;
    }
    a.fakename = tmp;  
}
void in(GiangVien a)
{
    cout << a.ID << ' ' << a.name << ' ' << a.Subject;
}
int main()
{
    int n; cin >> n; cin.ignore();
    GiangVien a[n];
    for(int i = 0; i < n; i++)
    {
        nhap(a[i]);
        change(a[i].Subject);
        getFake(a[i]);
    }
    int k; cin >> k; cin.ignore();
    while(k--)
    {
        string x;
        getline(cin, x);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << x << ":\n";
        for(int i = 0; i < x.size(); i++) x[i] = tolower(x[i]);
        for(int i = 0; i < n; i++)
        {
            if(a[i].fakename.find(x) != string::npos)
            {
                in(a[i]);
                cout << endl;
            }
        }
    }
    return 0;
}