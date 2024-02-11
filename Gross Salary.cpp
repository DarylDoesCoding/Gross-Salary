#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float basic, gross, da, hra; 
	cout<<"Enter basic salary of an employee: ";
	cin>>basic;
	if(basic<25000)
	{
		da = basic *80/100;
		hra = basic *20/100;
	}
	else if(basic >=25000 && basic<40000)
	{
		da = basic *90/100;
		hra = basic *25/100;
	}
	else if(basic>=40000)
	{
		da = basic *95/100;
		hra = basic *30/100;
	}
	gross = basic+hra+da;
	cout<<setw(25)<<"Basic Pay: "<<setw(10)<<basic<<endl;
	cout<<setw(25)<<"Dearness Allowance: "<<setw(10)<<da<<endl;
	cout<<setw(25)<<"House Rent Allowance: "<<setw(10)<<hra<<endl;
	cout<<setw(25)<<" "<<setw(10)<<"......"<<endl;
	cout<<setw(25)<<"Gross Salary"<<setw(10)<<gross<<endl;
	cout<<setw(25)<<" "<<setw(10)<<"......"<<endl;
	return 0;
}
