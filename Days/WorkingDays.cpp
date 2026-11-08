//NAME: SHARIFAH NUR IMAN BALQIS BINTI SYED KHAIR AZMAN JAMALULIL
//MATRIC NO: B032610168
//SESSION: S2G2

#include<iostream>
using namespace std;

int getYear(); // Function prototype
bool isLeap(int year); // Function prototype (1st syntax)
void computeWorkDays(bool, int); //Function prototype (2nd syntax)

int main() {
	int year; //Declare local variable for main ()
	bool status; // Declare local variable for main ()
	year = getYear(); //DFunction call to get year from user.
	status = isLeap(year); // Function call to check leap year.
	// Function call to compute and dispplay working days and year
	computeWorkDays(status, year);
	return 0;
}

// Function Definition
int getYear() {
	int year; //Declare local variable for main ()
	// Get input from user
	cout << "Enter year: ";
	cin >> year;
	return year; // Return value to the calling function
}

// Function Definition
bool isLeap(int year) {
	bool status; //Declare local variable for isLeap ()
	if (year % 4 == 0)
		status = true;
	else
		status = false;
	return status;
}

//  Function Definition
void computeWorkDays(bool status, int year) {
	cout << "Working days for " << year << " is ";
	if (status == true)
		cout << 366 - 52 * 2;
	else
		cout << 365 - 52 * 2;
	cout << endl;
	return;

}