// CSC 124
// M1LAB1 - We're seling something 
//name
//date

#include <iostream>
using namespace std;

int main () {
    // Declare my variables 
    string item_name = " books"; 
int item_count = 100; // How many we have
double item_cost = 7.00;
 // Price per item
double total_cost; 

// Do the work - Welcome people into the store
cout << "Welcome to the" << item_name << " store " << endl; 
cout << "We have " << item_count << " " << item_name << "." << endl;
cout << "They cost $" << item_cost << " each " << endl; 

// Calculate the total price
total_cost = item_count * item_cost; 
// Print the total 
cout << "To buy them all will cost $" << total_cost << endl; 
    return 0;
}