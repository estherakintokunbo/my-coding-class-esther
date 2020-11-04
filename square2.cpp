//find out the meaning of these things below
#include <iostream>
#include <string>
using namespace std;

 int main()
 {
	//Declare and initialize variable
	int age=0;
	double length = 0.0;
	char option = ' ';
	double perimeter = 0.0; 
	
	//Alphanumeric
		string username;
		string welcome = "Welcome ";
		double area=0.0;
		
	 //Pseudocode
	//Ask for user name
	cout << "Enter Username:  ";
	
	//Store input
	cin >> username;
		
	//Display a personalized welcome message
	cout << welcome  << username <<endl;
	cout << "Please enter your age: ";
	cin >> age;
		
	//Ask the user for length of the square
	cout << " Please enter the length of the square: ";
	cin >> length;
		
	//Prompt menu
	cout << "Enter A to calculate Area " << endl;
	cout << "Enter P to calculate Perimeter "<< endl;
	cin >> option;
	
	//Calculate the area and perimeter of the square
	area= length * length;
	perimeter = length * 4;
			
	// = is assignment
	// == is comparison		
	//Serving the orders
	if(option == 'A')
	{
		//Display area
		cout<< "The area of the square is: " << area <<endl;
	}
	else if (option == 'P')
	{
		//Display perimeter
		cout << "The perimeter of the square is: " << perimeter << endl;
		}
	else
	{
		cout<< "Invalid option. Goodbye!";
		//what does return -1 do?
		return -1;
		}
		
	//Think of ways to implement error check on this program
	/*Think of a user entering Characters "char" instead of the required
	 *  double datatype
	 * Also ensure username remains a string and not numbers */
	//Error check	
	//Thank the user for using the system
	
		return 0;
 }
