#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
class SinhVien{
    private:
        string ID, name,Class, birthday;
        double GPA;
    public:
        SinhVien()
        {
            ID = "";
            name = "";
            Class = "";
            birthday = "";
            GPA = 0;
        }
        friend istream& operator >> (istream& in, SinhVien &a)
        {
            a.ID = "B20DCCN";
            cnt++;
            string s = to_string(cnt);
            while(s.size() < 3) s = "0" + s;
            a.ID += s;
            scanf("\n");
            getline(in, a.name);
            in >> a.Class >> a.birthday >> a.GPA;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien a)
        {
            if(a.birthday[1] == '/') a.birthday = "0" + a.birthday;
            if(a.birthday[4] == '/') a.birthday.insert(3,"0");
            while(a.birthday.size() < 10) a.birthday.insert(6,"0");
            string s = a.name;
            string tmp = "";
            stringstream ss(s);
            while(ss >> s)
            {
                s[0] = toupper(s[0]);
                for(int i = 1; i < s.size(); i++) s[i] = tolower(s[i]);
                tmp += s + ' ';
            }
            a.name = tmp;
            out << a.ID << ' ' << a.name << a.Class << ' ' << a.birthday << ' ' << fixed << setprecision(2) << a.GPA;
            out << endl;
            return out;
        }
        friend bool cmp(SinhVien &a, SinhVien &b);
};
bool cmp(SinhVien &a, SinhVien &b)
{
    return a.GPA > b.GPA;
}
void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}