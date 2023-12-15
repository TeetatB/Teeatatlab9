#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
    double pb,ir,p,nb,t,i;
    int n=1;
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
	while(nb > 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << n++; 
	cout << setw(13) << left << pb; 
	i = ir*pb/100;
	cout << setw(13) << left << i; 
	t = pb+i;
	cout << setw(13) << left << t; 
	if (t < p) p = t;
	cout << setw(13) << left << p; 
	nb = t-p;
	cout << setw(13) << left << nb; 
	pb = nb; 
	cout << "\n";
	}
	return 0;
}