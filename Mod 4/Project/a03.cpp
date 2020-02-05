/*
Author: Chris Hall
Date: 4 - FEB - 2020
Class: CS - 161 - 10434
Sources: None
Discription: This program calculates the total fare for passengers at different ages and with diffrent amount of bags.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// Setup
	int age, adult, bags, child, infant, senior, totalPass, incBagCost, addBagNum, addBagCost, disBagTotal, disBagNum;
	double totalCost, costTickets;
	char answer;
	// Start
	cout << "Enter your age:";
	cin >> age;

	switch (age >= 18) { // Age check
	case true: // >=18
		cout << "You are eligible to purchase tickets.\nThis is an airline fare calculator." << endl;
		cout << "Enter number of passenger and baggage correctly.\nPassenger age, ticket purchased and number of luggage will be verified at airport." << endl;
		cout << "Do you want to purchase tickets now? [y/n]:";
		cin >> answer;
		if (answer == 121 || answer == 89) { // Yes to buying | Note: 121 = 'y', 89 = 'Y' 
			cout << "Enter number of adults (age 14-64):";
			cin >> adult;
			cout << "Enter number of seniors (age 65+):";
			cin >> senior;
			cout << "Enter number of children (age 3-13):";
			cin >> child;
			cout << "Enter number of infants (age 0-2):";
			cin >> infant;
			cout << "Enter number of checked in baggage:";
			cin >> bags;

			// Get the total paasanger count and ticket cost total
			totalPass = adult + child + infant + senior;
			costTickets = (adult * 147.3) + (child * 110.25) + (senior * 137.75);

			switch (bags <= totalPass) { // Are there more bags than passangers?
			case true: // Bags <= Passengers
				// Get costs and output
				disBagTotal = bags * 20;
				totalCost = costTickets + disBagTotal;
				
				cout << "Total fare including checked in luggage is $" << fixed << setprecision(2) << totalCost << endl;
				break;

			case false: // Bag > Passangers
				// Get costs and output
				addBagNum = bags - totalPass;
				disBagNum =  bags - addBagNum;
				addBagCost = addBagNum * 35;
				incBagCost = disBagNum * 20;
				totalCost = costTickets + addBagCost + incBagCost;

				cout << "Total fare including checked in luggage is $" << fixed << setprecision(2) << totalCost << endl;
				break;
			}		
		}
		else { // No to buying
			cout << "Bye Bye! Hope you will purchase ticket from us next time.\nPress q to exit";
		}
		break;
	case false: // <18
		cout << "You are a minor. Please ask an adult to purchase ticket" << endl;
		
	default:
		cout << "Thank you.\nPress q to exit.";
	}

	return 0;
}