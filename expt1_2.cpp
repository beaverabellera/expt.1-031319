#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double mass, density;

	cout<<"Enter mass in grams"<<endl;
	cin>>mass;

	cout<<"Enter density in grams per cubic centimeters"<<endl;
	cin>>density;

	cout<<"\n\nmass = "<<mass<<"g"<<endl;
	cout<<"density = "<<density<<"g/cm^3"<<endl;
	cout<<"Volume = "<<mass/(4*density)<<"cm^3"<<endl;
	-getch();
	return 0;
}
