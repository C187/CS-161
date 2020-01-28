/*
Author: Chris Hall
Date: 27 - JAN - 2020
Class: CS - 161 - 10434
Sources: None
Discription: This program reads a line of data about a stock, it's name, the purchase price, the sell price,
and the amount of shares. It then takes that info and caculates the total buy / sell amount before applying a 
1.5% service fee to the total sell amount and displaying the net profit or loss.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// Setup
	ifstream infile;
	ofstream outfile;
	string stockName = " ";
	double investment = 0, received = 0, numOfShares = 0;
	
	infile.open("Stock.txt"); // Open the input
	infile >> stockName;
	infile >> investment;
	infile >> received;
	infile >> numOfShares;
	infile.close(); // Close the input

	// Manipulate the data
	double investmentCost = investment * numOfShares;
	double receivedSell = received * numOfShares;
	double fee = receivedSell * 0.015;
	double profitOrLoss = (receivedSell - investmentCost) - fee;

	outfile.open("StockOutput.txt"); // Open the output
	outfile << fixed << showpoint;
	outfile << setprecision(2);

	outfile << "Stock Name\t|\t"; // Note: Formatted like this for readablity
	outfile << "Investment\t|\t";
	outfile << "Received\t|\t";
	outfile << "Service Charge\t|\t";
	outfile << "Profit or Loss\n";

	// Insert the data
	outfile << stockName << "\t\t|\t";
	outfile << investmentCost << "\t\t|\t";
	outfile << receivedSell <<"\t\t|\t";
	outfile << fee << "\t\t|\t";
	outfile << profitOrLoss;
	outfile.close(); // Close the output
	
	return 0;
}