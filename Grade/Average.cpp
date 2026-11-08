//NAME: SHARIFAH NUR IMAN BALQIS BINTI SYED KHAIR AZMAN JAMALULIL
//MATRIC NO: B032610168
//SESSION: S2G2

#include<iostream>
using namespace std;

void Display();  // Function prototype 
int getScore(); // Function prototype 
char getGrade(double avg); // Function prototype 
void Results(double, char); // Function prototype 

int main() {
	int total;  // Declare local variable for total score
	double avg; // Declare local variable for average score
	char grade; // Declare local variable for grade
	int i;  // Declare local variable for 5 scores
	int valid;  // Declare local variable for valid scores
	int total; // Declare local variable for total score

	total = getScore();  // Function call to get 5 valid scores and total
	avg = total / 5.0;  // Calculate average score
	grade = getGrade(avg);  // Function call to get grade 
	Results(avg, grade);   // Function call for 
	return 0;
}

// Function Definition
void Display() {
	int i; // Declare local variable for 5 scores
	cout << "Find Average for 5 Scores" << endl;
	for (i = 0; i < 30; i++) { // To print 30 dashes
		cout << "-";
	}
	cout << endl;
	for (i = 0; i < 30; i++) { // To print 30 dashes
		cout << "-";
	}
	cout << endl;
}

// Function Definition
int getScore() {
	int score; // Declare local variable for score
	int total = 0; // Declare local variable for total score
	int valid = 0; // Count of valid scores entered

	while (valid < 5) {
		cout << "Enter score: "; // For user to enter score
		cin >> score;
		if (score < 0 || score > 100) {
			cout << "!!! INVALID SCORE" << endl; // Display error message for invalid score if user enters invalid score
		}
		else {
			total += score; // To calculate valid score for 5 scores
			valid++;
		}
	}
	return total; // Return total score to the calling function
}

// Function Definition
char getGrade(double avg) {
	char grade; // Declare local variable for grade
	if (avg >= 80) {
		grade = 'A';
	}
	else if (avg >= 65) {
		grade = 'B';
	}
	else if (avg >= 50) {
		grade = 'C';
	}
	else if (avg >= 40) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	return grade; // Return grade to the calling function
}

// Function Definition
void Results(double avg, char grade) {
	int i;
	cout << "The average score is " << avg << endl; // To display average score
	cout << "The average grade is " << grade << endl; // To display average grade
	for (i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << endl;
	for (i = 0; i < 30; i++) { // To print 30 dashes
		cout << "-";
	}
	cout << endl;
}