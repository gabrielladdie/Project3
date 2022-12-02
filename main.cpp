#include <iostream>
#include <fstream>
#include <map>
#include "State.h"
#include "Year.h"
#include "covid.h"
using namespace std;

int main()
{
	string input;
	string input2;
	int inputYear;

	// State state;
	Year year;

	Covid::readFile("C:\\Users\\gabri\\downloads\\Conditions_Contributing_to_COVID-19_Deaths__by_State_and_Age__Provisional_2020-2022.csv");
    Covid::print();

	cout << "Do you want to view by Year or by State: ";
	cin >> input;

	if (input == "State" || input == "state")
	{
		cout << "Please enter initials of State you want to view: ";
		cin >> input2;

		cout << endl;

		while (true)
		{
            Covid::printState(input2);
			cout << "Please enter another state to view or -1 to exit: ";
			cin >> input2;
			cout << endl;
		}
	}
	else if (input == "Year" || input == "year")
	{
		cout << "Please select the year for viewing, ranked by total COVID cases: " << "2020\t" << "2021\t" << "2022\t" << endl;
		cin >> inputYear;
		cout << endl;

		while (true)
		{
            Covid::printYear(inputYear);
			/*if (inputYear == 2020)
			{

				year.year2020();
				cout << endl;
			}
			else if (inputYear == 2021)
			{
				year.year2021();
				cout << endl;
			}
			else if (inputYear == 2022)
			{
				year.year2022();
				cout << endl;
			}
			else
			{
				cout << "Please enter a correct year: " << endl;
			} */

			cout << "Please enter another year to view another: ";
			cin >> inputYear;
			cout << endl;
		}
    }
	else
	{
	cout << "Please enter again: ";
 }
}
