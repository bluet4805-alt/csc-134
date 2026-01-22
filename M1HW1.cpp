//CSC 134
// M1HW1- Movie Info
// Trinity 
// 1-21-26

#include <iostream>
#include <iomanip> // Decimal places
using namespace std;

int main() {
    //Make Variables 
    string movie_name = "The Game Plan"; 
    int release_year = 2007;
    double ticket_sales = 90.6; // Millions in USD

    // Decimal precision 
    cout << "Movie: " << movie_name << endl; 
    cout << "Relase Year: " << release_year << endl; 
    cout << "Ticket Sales Gross: $" << ticket_sales << " million" << endl; 

    cout << endl; // Note that the \ allows for quotes inside of a string 
    cout << "Favorite quotes from " << movie_name << endl;
    cout << "\" Bla Bla Bla, talk to me when you have your own action figure.\" - Joe Kingman" << endl;
    cout << "Movie Fact: Dwayne 'The Rock' Johnson stars as a professional quarterback." << endl; 
    cout << " My favorite scene is when Kingman enters the bathroom and finds it filling with suds because his daughter had filled the luxury tub with soap." << endl; 
    cout << " The movie contains a message about family bonds as well as heartwarming and comedic moments for the audience to enjoy." << endl;

    return 0;
}