/******************************************************************************
# Author:           Ari Pollack and Xavier Braker
# Lab               Discussion 2
# Date:             April 8, 2025
# Description:      This program will calculate the cost of traveling 20, 75, 
                    and 500 miles, given a vehicle’s miles per gallon and the 
                    price of gas per gallon.
# Input:            Float milesPerGallon, float pricePerGallon
# Output:           Float cost20Miles, float cost75Miles, float cost500Miles
# Sources:          Discussion 2 specifications
#******************************************************************************
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables for user input
    double milesPerGallon = 0;
    double pricePerGallon = 0;
    // Declare variables for output
    double cost20Miles = 0;
    double cost75Miles = 0;
    double cost500Miles = 0;

    // Set decimal precision for output
    cout << fixed << setprecision(2);

    // Display welcome message
    cout << "Give me your car's MPG (miles per gallon) and the price of gas pe\
r gallon, and I'll calculate the cost of traveling several different distances\
." << endl;
    
    // Get user input
    cout << "Enter miles per gallon: ";
    cin >> milesPerGallon;
    cout << "Enter cost per gallon (USD): ";
    cin >> pricePerGallon;
    cout << endl;

    // Calculate costs
    cost20Miles = (20 / milesPerGallon) * pricePerGallon;
    cost75Miles = (75 / milesPerGallon) * pricePerGallon;
    cost500Miles = (500 / milesPerGallon) * pricePerGallon;

    // Display results
    cout << "To travel 20 miles, it would cost you $" << cost20Miles << " for \
fuel." << endl;
    cout << "To travel 75 miles, it would cost you $" << cost75Miles << " for \
fuel." << endl;
    cout << "To travel 500 miles, it would cost you $" << cost500Miles << " for \
fuel." << endl << endl;

    // Display goodbye message
    cout << "Be very careful if you decide to go on a 500 mile road trip!";
    return 0;
}
