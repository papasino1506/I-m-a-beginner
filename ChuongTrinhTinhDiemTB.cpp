#include <iostream>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int toan,li,hoa,van,anh;
	double dtb;
	cout<<"Chuong trinh tinh diem trung binh va xep loai hoc luc!";
	cout<<"\n Moi ban nhap diem toan  ";cin>>toan;
    cout<<"\n Moi ban nhap diem van   ";cin>>van;
    cout<<"\n Moi ban nhap diem anh   ";cin>>anh;
    cout<<"\n Moi ban nhap diem li    ";cin>>li;
    cout<<"\n Moi ban nhap diem hoa   ";cin>>hoa;
    dtb=(toan+li+hoa+van+anh)/5;
    if (dtb>10||dtb<0){
    	cout<<"diem ban nhap khong hop le vui long nhap lai";}
	if (dtb>8.0)
	    { cout<<" Ban dat hoc sinh gioi"<<dtb;}
	if(dtb>6.5&&dtb<8.5)
	    {cout<<"Ban dat hoc sinh kha "<<dtb;}
    if(dtb<6.5&&dtb>5) {
	  	cout<<"Ban dat hoc sinh trung binh"<<dtb;} 
	if (dtb<5&&dtb>3)
	    { cout<<"ban dat hoc sinh yeu"<<dtb;}
	if ( dtb<3)
	{ cout<<"dup";}
	                 
	                    
	  return dtb;
}
