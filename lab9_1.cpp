#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
double pb,ir,p;
int n=1;
int main(){	
	cout << "Enter initial loan: ";
	cin >> pb;
	cout << "Enter interest rate per year (%): ";
	cin >> ir;
	cout << "Enter amount you can pay per year: ";
	cin >> p;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double i = ir*pb/100;
	double t = pb+i;
	double nb = t-p;
	while(nb > 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << n++; //endofyear
	cout << setw(13) << left << pb; //previous balance
	i = ir*pb/100;
	cout << setw(13) << left << i; //interest
	t = pb+i;
	cout << setw(13) << left << t; //total
	if (t < p){
		p = t;
	}
	cout << setw(13) << left << p; //payment
	nb = t-p;
	cout << setw(13) << left << nb; //newbalance
	pb = nb; //change previous balance
	cout << "\n";	
	}
	return 0;
}
