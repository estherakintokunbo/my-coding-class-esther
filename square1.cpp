#include <iostream>
using namespace std;

 int main()
 {
	//Declare and initialize variable
	//int length=0
		double length=0.0;
		string username;
		double area=0.0;
	 //Pseudocode
	//Ask for user name
		cout << "Enter Username:  ";
	//Store input
		while (!(cin >> username))
			{
				cout << "ERROR! Enter a correct username: ";
				cin.clear();
				cin .ignore();
				}
		//cin >> username;
	//Display a personalized welcome message
		cout << "Welcome " << username <<endl;
	//Ask the user for length of the square
		cout << " Please enter the length of the square: ";
		while (!(cin >> length));
			{
			//Error explanation
			cout << "ERROR! Invalid square length" ;
			
			//Clear Input
			cin.clear();
			
			//Discard the previous Input
			cin.ignore(123, '\n');
			}
	//Error check
	//Calculate the area of the square
		area= length * length;
	//Display the result
		cout<< "The area of the square is: " << area;
	//Thank the user for using the system
		cout << " Thank you for using area calculator";
		return 0;
 }
