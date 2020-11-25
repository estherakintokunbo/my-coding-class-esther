#include <iostream>
#include <string>

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
		string from = "from ";
		
	//Ask user to supply username and store the input
		cout << "Welcome, please supply your Username: ";
		cin >> username;
		
	//Ask user to supply their country code and store the input
		cout << "Please enter your Country code: ";
		cin >> countrycode;
	
	//Compare country code and set cases for lowercase inputs
		if (countrycode == "NGR")
		{
			cout << welcome << username << " from Nigeria" << endl;
			cout << msg;
		}
		else if (countrycode == "ngr")
		{
			cout << welcome << username << " from Nigeria" << endl;
			cout << msg;
		}
		else if (countrycode == "GHN")
		{
			cout << welcome << username << " from Ghana" << endl;
			cout << msg;
		}
		else if (countrycode == "ghn")
		{
			cout << welcome << username << " from Ghana" << endl;
			cout << msg;
		}
		else if (countrycode == "USA")
		{
			cout << welcome << username << " from United States of America" << endl;
			cout << msg;
		}
		else if (countrycode == "usa")
		{
			cout << welcome << username << " from United States of America" << endl;
			cout << msg;
		}
	//Give user their output
	//End the program
	}
