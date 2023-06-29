#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ID = "B20DCCN", name, Class, birthday;
    double GPA;
};
void nhap(SinhVien ds[], int N)
{
    for(int i = 0; i < N; i++)
    {
        string s = to_string(i + 1);
        while(s.size() < 3) s = "0" + s;
        ds[i].ID += s;
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].Class >> ds[i].birthday >> ds[i].GPA;
    }
}
void chuanHoa(string &s)
{
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3,"0");
}
string chuanHoaNS(string &s)
{
    stringstream ss(s);
    string tmp = "";
    while(ss >> s)
    {
        s[0] = toupper(s[0]);
        for(int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        tmp += s + ' ';
    }
    return tmp;
}
void sapxep(SinhVien ds[], int N)
{
    for(int i = 0; i < N-1; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(ds[i].GPA < ds[j].GPA) swap(ds[i],ds[j]);
        }
    }
}
void in(SinhVien ds[], int N)
{
    for(int i = 0; i < N; i++)
    {
        ds[i].name = chuanHoaNS(ds[i].name);
        chuanHoa(ds[i].birthday);
        cout << ds[i].ID << ' ' << ds[i].name << ds[i].Class << ' ' << ds[i].birthday << ' ' << fixed << setprecision(2) << ds[i].GPA;
        cout << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}