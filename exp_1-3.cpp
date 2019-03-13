#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	double netBalance, payment, d1, d2,interestrate, ave_dailybalance, interest;
	cout<<"Enter net balance"<<endl;
	cin>>netBalance;

	cout<<fixed<<showpoint;
	setprecision(2);
	cout<<"Enter made payment"<<endl;
	cin>>payment;

	cout<<"Enter days in the billing cycle"<<endl;
	cin>>d1;

	cout<<"Enetr the number of days payment is made before billing cycle"<<endl;
	cin>>d2;

	interestrate = 0.0152;
	ave_dailybalance = (netBalance*d1-payment*d2)/d1;
	interest = (ave_dailybalance*interestrate);


	cout<<"\n\n\ninterest = "<<interest<<endl;

	-getch();
	return 0;
}
