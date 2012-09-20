//============================================================================
// PC 3.16 - Interest Earned
// -------------------------
// Programmer: Jeremy F McKay
// Date: September 19, 2012
// -------------------------
// This program will ask for the principal of a savings account, the interest
// rate and how many times the interest is compounded and display a report
//
// Note how the code does not go off to infinity, but about 70 characters.
// For example:
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890
// PC316.cpp
// Author      : Jeremy McKay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	//Declare variables
	int compounded;

	double principal,
		   annual_rate,
		   interest,
		   savings;

	//Take inputs for each.
	cout << "\n   " << "What was the principal on the account: $";
	cin >> principal;

	cout << "\n   " << "What is the interest rate: ";
	cin >> annual_rate;

	cout << "\n   " << "How many times is the interest compounded: ";
	cin >> compounded;

	//Do math
	interest = principal * pow((1+(annual_rate/100)/compounded),compounded)-principal;
	savings = principal + interest;


	//Display results
	cout << "\n\n" << "   "
		 << "Savings interest report\n"
		 << "-----------------------------------------------\n";
	cout << setprecision(2) << fixed;
	cout << "   " << setw(22)
		 << left <<"Interest Rate:"
		 << setw(8) << right << annual_rate << "%" << endl;

	cout << "   " << setw(22)
			 << left <<"Time compounded:"
			 << setw(8) << right << compounded << endl;

	cout << "   " << setw(21)
			 << left <<"Principal:" << "$"
			 << setw(8) << right << principal << endl;

	cout << "   " << setw(21)
				 << left <<"Interest:" << "$"
				 << setw(8) << right << interest << endl;

	cout << "   " << setw(21)
				 << left <<"Amount in Savings:" << "$"
				 << setw(8) << right << savings << endl;



	return 0;
}
