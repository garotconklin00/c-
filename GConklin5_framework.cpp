#include<iostream>
#include<iomanip>
using namespace std;

// new comment

const double ECONOMY_RATE = 60.00;
const double FULL_SIZE_RATE = 65.00;
const double LUXURY_RATE = 125.00;
const double FULL_TANK = 75.00;
const double INS_COST = 8.75;

// function Prototype Declaration
int getData(int numDays, int carClass, int gasOption, int insurance);
int calculateCharges(int numDays, int carClass, int gasOption, int gasCharge, int insurance , int insuranceCost);
int calcTotalDue(int totalDue, int classCharge, int gasCharge, int insuranceCost);
int displayBill(int numDays, int carClass, int classCharge, int gasCharge, int insuranceCost, int totalDue);

int main()
{
// Globals
	int numDays=0;
	char carClass = 'n', gasOption = 'n' , insurance='n';
	double classCharge=0, gasCharge=0, totalDue=0, insuranceCost=0;

// function getData
getData(numDays, carClass, gasOption, insurance);

// function calculateCharges
calculateCharges(numDays, carClass, gasOption, gasCharge, insurance , insuranceCost);

// function calcTotalDue
calcTotalDue(totalDue, classCharge, gasCharge, insuranceCost);

// function displayBill
displayBill(numDays, carClass, classCharge, gasCharge, insuranceCost, totalDue)
		
	system("pause");
	return 0;
}

// function getData
int getData(int numDays, int carClass, int gasOption, int insurance) {

	cout << "Enter the number of car rental days: ";
	cin >> numDays;

	cout << "Enter the car class (E for economy, F for full size, and L for luxury): ";
	cin >> carClass;

	cout << "Full tank of gas option (Y for yes, N for no): ";
	cin >> gasOption;

	cout << "Extra insurance option (Y for yes, N for no): ";
	cin >> insurance;
}

// function calculateCharges
int calculateCharges(numDays, carClass, gasOption, gasCharge, insurance , insuranceCost) {

	switch (carClass)
	{
	case 'E':
	case 'e':  classCharge = ECONOMY_RATE * numDays; break;
	case 'F':
	case 'f':  classCharge = FULL_SIZE_RATE * numDays; break;
	case 'L':
	case 'l':  classCharge = LUXURY_RATE * numDays; break;
	}

	if (gasOption == 'Y' || gasOption == 'y')
		gasCharge = FULL_TANK;
	else
		gasCharge = 0;


	if (insurance == 'Y' || insurance == 'y')
		insuranceCost = INS_COST * numDays;
	else
		insuranceCost = 0;
}

// function calcTotalDue
int calcTotalDue(int totalDue, int classCharge, int gasCharge, int insuranceCost) {
    totalDue = classCharge + gasCharge + insuranceCost;
}

// function displayBill
int displayBill(int numDays, int carClass, int classCharge, int gasCharge, int insuranceCost, int totalDue) {
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Acme Car Rental" << endl;
	cout << "Rental Billing Statement" << endl << endl;
	cout << "Number of days rented: " << numDays << endl << endl;
	cout << "Class of car: ";
	switch (carClass)
	{
	case 'E':
	case 'e':  cout << "Economy"; break;
	case 'F':
	case 'f':  cout << "Full Size"; break;
	case 'L':
	case 'l':  cout << "Luxury"; break;
	}
	cout << endl << endl;

    cout << setw(25) << left << "Car Class Charge " << '$'
		<< setw(8) << right << classCharge << endl;
	cout << setw(25) << left << "Full-tank Option Charge" << '$'
		<< setw(8) << right << gasCharge << endl;
	cout << setw(25) << left << "Insurance Option Charge" << '$'
		<< setw(8) << right << insurance_cost << endl << endl;
	cout << setw(25) << left << "Total Due" << '$'
		<< setw(8) << right << totaldue << endl;
}
