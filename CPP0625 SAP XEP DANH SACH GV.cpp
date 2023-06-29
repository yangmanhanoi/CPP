#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
class GV
{
    private:
        string ID = "GV",name, Subject, lastname;
    public:
        friend istream& operator >> (istream& in, GV &a);
        friend ostream& operator << (ostream& out, GV a);
        void Change(GV &a);
        friend bool cmp (GV &a, GV &b);
};
istream& operator >> (istream& in, GV &a)
{
    cnt++;
    string s = to_string(cnt);
    while(s.size() < 2) s = "0" + s;
    a.ID = a.ID + s;
    getline(in, a.name);
    getline(in, a.Subject);
    string tmp = a.name;
    stringstream ss(tmp);
    while(ss >> tmp)
    {
        a.lastname = tmp;
    }
    return in;
}
bool cmp(GV &a, GV &b)
{
    if(a.lastname < b.lastname) return 1;
    else if(a.lastname > b.lastname) return 0;
    else{
        return a.ID < b.ID;
    }
}
void GV :: Change(GV &a)
{
    string tmp = "";
    string s = a.Subject;
    stringstream ss(s);
    while(ss >> s)
    {
        tmp += toupper(s[0]);
    }
    a.Subject = tmp;
}
ostream& operator << (ostream& out, GV a)
{
    a.Change(a);
    out << a.ID << ' ' << a.name << ' ' << a.Subject;
    return out;
}
int main()
{
    int n; cin >> n; cin.ignore();
    GV a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) cout << a[i] << endl;
    return 0;
}