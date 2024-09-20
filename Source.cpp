// Calculate earned interest based on initial deposit and time

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//setting up variables
	double principal, rate, time, amount, root, interest;

	//getting input
	cout << "Please enter the original savings balance: ";
	cin >> principal;
	cout << "Please enter the interest rate: ";
	cin >> rate;
	cout << "Please enter the times per year the interest is compounded: ";
	cin >> time;

	//calculations
	rate = rate / 100;
	root = 1 + (rate / time);
	amount = principal * (pow(root, time));
	interest = amount - principal;
	rate = rate * 100; //resetting rate to percent value

	//output
	cout << "Interest Rate: " << rate << "%" << endl;
	cout << "Times Compounded: " << time << endl;
	cout << "Principal: $" << principal << endl;
	cout << "Interest: $" << setprecision(2) << fixed << interest << endl;
	cout << "Amount in Savings: $" << amount;
}