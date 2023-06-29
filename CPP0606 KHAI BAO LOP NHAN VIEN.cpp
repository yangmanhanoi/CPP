#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string ID = "00001";
        string name, gender, birthday,address, feecode, date;
    public:
        void nhap();
        void xuat();
};
void NhanVien::nhap()
{
    getline(cin, this->name);
    cin >> this->gender >> this->birthday;
    cin.ignore();
    getline(cin, this->address);
    cin >> this->feecode >> this->date;
}
void NhanVien::xuat()
{
    cout << this->ID << ' ' << this->name << ' ' << this->gender << ' ' <<this->birthday <<' ' << this->address << ' ' << this->feecode << ' ' << this->date;
    
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
