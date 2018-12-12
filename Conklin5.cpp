//Garot Conklin Project 5
//In this Project we will be usingn this project to figure out the total cost
//of how much you are going to be charged for your rental car based on 
//your preferences and what is available for you to get


#include<iostream>
#include<iomanip>
using namespace std;

//function protoypes
int getData(int numDays, int carClass, int gasOption, int Insurance);

const double ECONOMY_RATE = 60.00;
const double FULL_SIZE_RATE = 65.00;
const double LUXURY_RATE = 125.00;
const double FULL_TANK = 75.00;
const double INS_COST = 8.75;

int main()
{
	//variable definition

	int numDays = 0;
	char carClass = 'n', gasOption = 'n', Insurance = 'n';
	double classcharge = 0, gascharge = 0, totaldue = 0, insurance_cost = 0;

	//call function
	int num = 0;
	while (num < 5)
	{
		int data;
		data = getData(numDays, carClass, gasOption, Insurance);
		cout << "The data you have chosen is: ";
		cout << data;
		cout << endl;
	}
	// Calculate charges
	switch (carClass)
	{
	case 'E':
	case 'e':  classcharge = ECONOMY_RATE * numDays; break;
	case 'F':
	case 'f':  classcharge = FULL_SIZE_RATE * numDays; break;
	case 'L':
	case 'l':  classcharge = LUXURY_RATE * numDays; break;
	}

	if (gasOption == 'Y' || gasOption == 'y')
		gascharge = FULL_TANK;
	else
		gascharge = 0;


	if (Insurance == 'Y' || Insurance == 'y')
		insurance_cost = INS_COST * numDays;
	else
		insurance_cost = 0;

	//	totaldue = classcharge + gascharge + insurance_cost;
	totaldue = classcharge + gascharge + insurance_cost;

	//	displayAll(carClass, classcharge, gascharge, insurance_cost, totaldue, numDays);

	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Acme Car Rental" << endl;
	cout << "Rental Billing Statement" << endl << endl;
	cout << "Number of days rented: " << numDays << endl << endl;
	cout << "Class of car: ";

	cout << endl << endl;

	cout << setw(25) << left << "Car Class Charge " << '$'
		<< setw(8) << right << classcharge << endl;
	cout << setw(25) << left << "Full-tank Option Charge" << '$'
		<< setw(8) << right << gascharge << endl;
	cout << setw(25) << left << "Insurance Option Charge" << '$'
		<< setw(8) << right << insurance_cost << endl << endl;
	cout << setw(25) << left << "Total Due" << '$'
		<< setw(8) << right << totaldue << endl;
	system("pause");
	return 0;
}
//function definition for getData
//this definition will allow the user to enter in the data that they want
//and then it will be returned to main
int getData(int numDays, int carClass, int gasOption, int Insurance)
{

		cout << "How many days do you plan on having the car: ";
		cin >> numDays;

		cout << "What car class do you plan to have(E for economy, F for full size, and L for luxury): ";
		switch (carClass)
		{
		case 'E':
		case 'e':  cout << "Economy"; break;
		case 'F':
		case 'f':  cout << "Full Size"; break;
		case 'L':
		case 'l':  cout << "Luxury"; break;
		}
		cin >> carClass;


		cout << "What gas option would you like to have(Y for full tank N for no): ";
		cin >> gasOption;
		
		cout << "Would you like the full insurance(Y for yes, N for no): ";
		cin >> Insurance;
		
		return 0;
}

//function definition for calculateCharges
//this definition will calculate how much everything is 
//going to cost the user for their rental car
void calculateCharges()
{



}
