#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,itr,pay,bal,sumitr,total,newbal=9999999;
	int year=1;
	cout << "Enter initial loan: " ;
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> itr;
	cout << "Enter amout you can pay per year: ";
	cin >> pay;
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
	
	while(loan>0){
		if(newbal<pay||loan<pay){
			sumitr=loan*(itr/100);
			total=loan+sumitr;
			pay=total;
			newbal=total-pay;
			
		}else{	
			sumitr=loan*(itr/100);
			total=loan+sumitr;
			newbal=total-pay;
		}
			
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year; 
			cout << setw(13) << left << loan;
			cout << setw(13) << left << sumitr;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << newbal;
			cout << "\n";
		
		loan=newbal;
		year++;	
	}
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/*cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/
	
	return 0;
}
