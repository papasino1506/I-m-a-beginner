#include<iostream>
#include<math.h>
using namespace std;
struct Diem
{
	double x;
	double y;
};
double KhoangCach(Diem a,Diem b);
int main()
{
Diem a ;
	a.x=0;
	a.y=2;
Diem b ;
    b.x=0;
    b.y=4;
    double kc = KhoangCach(a,b);
    cout<<"khoang cach tu A("<<a.x<<","<<a.y<<")den B("<<b.x<<","<<b.y<<") la "<<kc;
    return 0;
}
double KhoangCach(Diem a,Diem b)
{
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
