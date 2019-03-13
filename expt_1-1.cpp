#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	double box_price, sideline_price, premium_price, general_admission_price;
	int box, sideline, premium,general_admission;
	//box

	cout<< "Enter box tickets price"<<endl;
	cin>>box_price;

	cout<< "Enter number of box tickets sold"<<endl;
	cin>>box;

	//sideline
	cout<<"Enter sideline tickets price"<<endl;
	cin>>sideline_price;

	cout<<"Enter number of sideline tickets sold"<<endl;
	cin>>sideline;

	

	//premium
	cout<<"Enter premium tickets price"<<endl;
	cin>>premium_price;

	cout<<"Enter number of premium tickets sold"<<endl;
	cin>>premium;

	//genad

	cout<<"Enter general admission ticket price "<<endl;
	cin>>general_admission_price;

	
	cout<<"Enter number of general admission ticket "<<endl;
	cin>>general_admission;


	cout<<"Ticket Price\tNumber of Tickets Sold"<<endl;
	cout<<box<<"\t\t"<<box*box_price<<endl;
	cout<<sideline<<"\t\t"<<sideline*sideline_price<<endl;
	cout<<premium<<"\t\t"<<premium*premium_price<<endl;
	cout<<general_admission<<"\t\t"<<general_admission*general_admission_price<<endl;
	cout<<"Total Tickets Sold\tTotal Sale"<<endl;
	cout<<box + sideline + premium + general_admission<<"\t\t\t"<< (box*box_price)+(sideline*sideline_price)+(premium*premium_price)+(general_admission*general_admission_price) <<endl;

	-getch();

	return 0;
}


