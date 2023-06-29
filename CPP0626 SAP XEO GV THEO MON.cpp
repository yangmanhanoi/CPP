#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
struct GiangVien
{
    string ID = "GV", name, Subject;
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
void in(GiangVien a)
{
    cout << a.ID << ' ' << a.name << ' ' << a.Subject;
}
int main()
{
    int n; cin >> n;cin.ignore();
    GiangVien a[n];
    for(int i = 0; i < n; i++)
    {
        nhap(a[i]);
        change(a[i].Subject);
    }
    int k; cin >> k; cin.ignore();
    while(k--)
    {
        string s;
        getline(cin, s);
        change(s);
        cout << "DANH SACH GIANG VIEN BO MON " << s << ":\n";
        for(int i = 0; i < n; i++)
        {
            if(a[i].Subject == s)
            {
                in(a[i]);
                cout << endl;
            }
        }
    }
    return 0;
}