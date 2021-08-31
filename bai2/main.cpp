#include <iostream>

using namespace std;
class NhanVien
{
private:
    string name, gender, id, idNo;
    int age;
    long basicSalary, salary, allowance ;
public:
    friend istream &operator >>(istream &is, NhanVien &nv)
    {
        cout<<"Ho ten : ";
        is >> nv.name;
        cout<<"Tuoi : ";
        is >> nv.age;
        cout<<"Gioi tinh : ";
        is >> nv.gender;
        cout<<"Ma nhan vien : ";
        is >> nv.id;
        cout<<"So CMT : ";
        is >> nv.idNo;
        cout<<"Luong co ban : ";
        is >> nv.basicSalary;
        cout<<"Phu cap : ";
        is >> nv.allowance;
        nv.salary = nv.basicSalary * 3 + nv.allowance;
        return is;
    }
    friend ostream &operator << (ostream &os, NhanVien &nv)
    {
        os<<nv.name<<"\t"<<nv.age<<"\t"<<nv.gender<<"\t"<<nv.id<<"\t"<<nv.idNo<<"\t"<<nv.basicSalary<<"\t"<<nv.allowance<<"\t"<<nv.salary<<endl;
        return os;
    }
    int getAge()
    {
        return age;
    }
};
void sortByAge(NhanVien nv[], int n)
{
    NhanVien tmp;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(nv[i].getAge() > nv[j].getAge())
            {
                tmp = nv[i];
                nv[i] = nv[j];
                nv[j] = tmp;
            }
        }
    }
}
int main()
{
    int n;
    NhanVien nv[5];
    int opt;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1.Nhap nhan vien"<<endl;
        cout<<"2.Xuat nhan vien"<<endl;
        cout<<"3.Sap xep nhan vien theo tuoi"<<endl;
        cout<<"Moi ban chon : ";
        cin >> opt;
        switch(opt)
        {
        case 1 :
        {
            cout<<"Nhap so luong nhan vien : ";
            cin >> n;
            for(int i = 0; i< n; i++)
            {
                cout<<"Nhan vien thu " << i +1 << endl;
                cin >> nv[i];
            }

            break;
        }
        case 2 :
        {
            cout << "so luong nhan vien : "<< n<< endl;
            for(int i = 0; i< n; i++)
            {
                cout<<nv[i];
            }

        }
        case 3 :
        {
            sortByAge(nv, n);
            break;
        }
        default :
            cout<"Moi ban chon lai";
        }
    }
    while(opt != 0);
    return 0;
}
