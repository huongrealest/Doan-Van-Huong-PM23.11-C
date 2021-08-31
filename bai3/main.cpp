#include <iostream>
#include <conio.h>

using namespace std;
class TT
{
    float a,b,c;
public:
    friend istream & operator>>(istream & x,TT & y);
    friend ostream & operator<<(ostream & x,TT & y);
    TT operator+(TT y);
    TT operator-();
};
istream & operator>>(istream & x,TT & y)
{
	cout<<"Nhap a= ";
	x>>y.a;
	cout<<"Nhap b= ";
	x>>y.b;
	cout<<"Nhap c= ";
	x>>y.c;
	return x;
}
ostream & operator<<(ostream & x,TT & y)
{
	x<<y.a<<"x2+"<<y.b<<"x+"<<y.c<<"=0";
	return x;
}

TT TT::operator+(TT y)
{
	TT z;
	z.a=a+y.a;
	z.b=b+y.b;
	z.c=c+y.c;
	return z;
}
TT TT::operator-()
{
	TT z;
	z.a=-a;
	z.b=-b;
	z.c=-c;
	return z;
}
int main()
{
    TT x,y,z;
	cout<<"Nhap tam thuc 1: \n";
	cin>>x;
	cout<<x<<endl;
	cout<<"Nhap tam thuc 2: \n";
	cin>>y;
	cout<<y<<endl;
	z=x+y;
	cout<<"Cong tam thuc: Z= "<<x<<" + "<<y<<" = "<<z<<endl;
	z=-z;
	cout<<"Doi dau tam thuc Z= -Z= "<<z<<endl;
	getch();
	return 0;
}
