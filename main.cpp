#include <iostream>

using namespace std;

int main() {
  int loop = 0;
  while(loop == 0) {
    string firstName, lastName;
    
    // Ask the user to enter their first and last name.
      
    cout << "Please enter your first name: \n";
    cin >> firstName;
    firstName[0] = toupper(firstName[0]); // Capitalize the first letter of the users first name
      
    cout << "Please enter your last name: \n";
    cin >> lastName;
    lastName[0] = toupper(lastName[0]); // Capitalize the first letter of the users last name
      
    // Say hello to the person.
    cout << "Hello " << firstName << " " << lastName <<"! 👋\n";
  }
} 