/********************************************************************
* Program name: zooTyc												*
* Author: John Casillas  											*
* Date: February 4, 2018											*
* Description: lines 13-41 are case validating.						*
*				lines 43-63 are > 0 integer validating.				*
*				lines 65-105 are row/column validating.				*
********************************************************************/
#include "inputValidation.hpp"
#include <iostream>
using namespace std;

double menuValidation(double validate) // make sure numbers coming in are initialized as doubles
{
    //int validate;
	    while(1) //Begins infinite loop that will only break if an integer of 1 or 2. https://www.hackerearth.com/practice/notes/validating-user-input-in-c/
	{
		if(cin.fail()) //if not an integer:
			{
				cin.clear(); // clears the error flag on cin. https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input
				cin.ignore(100, '\n'); // skips to the next newline, and skips 100 characters
				cout << "Please enter an integer, either 1 or 2." << endl; // asks for input again
				cin >> validate;
				// cout << "Not an integer catch: " << validate << endl; -- test cout
			}
		if(!cin.fail() && (validate == 1 || validate == 2)) 	// If valid input:
		{   // cout << validate << endl; -- test cout
		    return validate;									// then break loop.
		    break;
		}

		else // if an integer, but not a 2 or 3:
		{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a 1 or a 2."<<endl;
				cin >> validate;
				// cout << "Not correct integer catch: " << validate << endl; -- test cout
		}
	}
}

double integerValidation(double intValidate)
{
	bool check = true;

	//cout << "Please enter a number greater than one." << endl; // edited to be greater than 1, rather than 0
	//cin >> intValidate;

	while(check == true)
	{
		if (intValidate > 1)									// greater than 1, not zero
		{
			check = false;
		}
		else
		{
			cout << "The number must be greater than one. Try again." << endl;
			cin.clear();
			cin.ignore();
		}
	}
}

double menu4Validation(double validate) // make sure numbers coming in are initialized as doubles
{
    //int validate;
	    while(1) //Begins infinite loop that will only break if an integer of 1 or 2. https://www.hackerearth.com/practice/notes/validating-user-input-in-c/
	{
		if(cin.fail()) // if not an integer:
			{
				cin.clear(); // clears the error flag on cin. https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input
				cin.ignore(100, '\n'); // skips to the next newline, and skips 100 characters
				cout << "Please enter a valid option." << endl; // asks for input again
				cin >> validate;
				// cout << "Not an integer catch: " << validate << endl; -- test cout
			}
		if(!cin.fail() && (validate == 1 || validate == 2 || validate == 3)) 	// If valid input:
		// if(!cin.fail() && (0 < validate < 5)) 	// If valid input:
		{   // cout << validate << endl; -- test cout
		    return validate;									// then break loop.
		    break;
		}

		else // if an integer, but not a valid option
		{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Invalid option." << endl;
				cin >> validate;
				// cout << "Not correct integer catch: " << validate << endl; -- test cout
		}
	}
}
