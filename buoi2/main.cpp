#include <iostream>
#include<conio.h>
using namespace std;

class Mang
{
private:
    int n;
    float a[100];
public:
    Mang operator++();
    Mang operator--();

    friend istream &operator >>(istream &is, Mang &x)
    {
        cout<<"Do dai : ";
        is>>x.n;
        for(int i = 0; i<x.n; i++)
        {
            cout<<"a["<<i<<"]= ";
            is>>x.a[i];
        }
        return is;
    }
    friend ostream &operator << (ostream &os, Mang x)
    {
        for(int i = 0; i<x.n; i++)
        {
            os<<x.a[i]<<"\t";
        };
        return os;
    }
};
Mang Mang::operator++()
{
    Mang z;
    int i,j;
    float tg;
    z.n=n;
    for(i=0; i<n; i++)
        z.a[i]=a[i];
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(z.a[j]<z.a[i])
            {
                tg=z.a[i];
                z.a[i]=z.a[j];
                z.a[j]=tg;
            }
    return z;
}
Mang Mang::operator--()
{
    Mang z;
    int i,j;
    float tg;
    z.n=n;
    for(i=0; i<n; i++)
        z.a[i]=a[i];
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(z.a[j]>z.a[i])
            {
                tg=z.a[i];
                z.a[i]=z.a[j];
                z.a[j]=tg;
            }
    return z;
}
int main()
{
    Mang x,z;
    cin>>x;
    cout<<" mang vua nhap la := ";
    cout<<x;
    cout<<"Menu:"<<endl;
    cout<<"1.Tang dan"<<endl;
    cout<<"1.Giam dan"<<endl;
    int opt;
    cout << "Option: ";
    cin >> opt;
    switch(opt)
    {
    case 1 :
    {
        z=++x;
        cout<<"\n mang sau khi sap xep := "<<z;
        break;
    }
    case 2 :
    {
        z=--x;
        cout<<"\n mang sap xep giam dan := "<<z;
        break;
    }
    default:
    {
        cout << "Error" << endl;
    }
    }
    getch();
}
