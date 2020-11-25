#include <iostream>
#include <string>
#include <algorithm>

//country code assignment
using namespace std;

int main()
{
	//pseudocode
	//Declare and initialize variables
		string username;
		string countrycode;
		string msg = "Thank you for coming";
		string welcome = "Welcome ";
		
		
	//Ask user to supply username and store the input
		cout << "Welcome, please supply your Username: ";
		cin >> username;
		
	//Ask user to supply their country code and store the input
		cout << "Please enter your Country code: ";
		cin >> countrycode;
	
	//Set all country code entries to be transformed into lower cases
	transform(countrycode.begin(), countrycode.end(), countrycode.begin(), ::tolower);
	
	//Check country code, and display a customized welcome message
		if (countrycode == "ngr")
		{
			cout << welcome << username << ", from Nigeria." << endl;
			cout << msg;
		}
		else if (countrycode == "ghn")
		{
			cout << welcome << username << ", from Ghana" << endl;
			cout << msg;
		}
		else if (countrycode == "gam")
		{
			cout << welcome << username << ", from Gambia" << endl;
			cout << msg;
			}
		else {
			cout << "Dear " << username << ", you have entered an invalid option for this system!" << endl;
			cout << "Please check your Country code. Thank You." << endl;
			}
		return 0;	
}
