#include <iostream>
#include <conio.h>

using namespace std;
class PS
{
    float TS,MS;
public:
    friend istream & operator>>(istream & x,PS & y);
    friend ostream & operator<<(ostream & x,PS & y);
    PS operator*(PS y);

    PS()
    {
        TS=0;
        MS=1;
    }

    PS(float t, float m)
    {
        TS=t;
        MS=m;
    }
};
istream & operator>>(istream & x,PS & y)
{
    cout<<"Nhap tu so: ";
    x>>y.TS;
    cout<<"Nhap mau so: ";
    x>>y.MS;
    return x;

}
ostream & operator<<(ostream & x,PS & y)
{
    x<<y.TS<<"/"<<y.MS;
    return x;
}
PS PS::operator*(PS y)
{
    PS z;
    z.TS=TS*y.TS;
    z.MS=MS*y.MS;
    return z;
}
int main()
{
    PS x,y,z;
	cout<<"Phan so thu nhat:\n";
	cin>>x;
	cout<<x<<endl;
	cout<<"Phan so thu hai:\n";
	cin>>y;
	cout<<y<<endl;
	z=x*y;
	cout<<"Ket qua phep nhan 2 ps: "<<x<<" * "<<y<<" = " <<z;
	getch();
    return 0;
}
