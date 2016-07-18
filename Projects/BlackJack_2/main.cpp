/* 
 * File:   main.cpp
 * Author: macabrera
 *
 * Created on July 14, 2016, 3:29 PM
 */
/* 
 * File:   main.cpp
 * Author: macabrera
 *
 * Created on July 14, 2016, 3:29 PM
 */

#include <iostream>  //Input / Output library
#include <cstdlib>   //C standard library
#include <string>    //string stream library
#include <ctime>     //C Time
#include <iomanip>   //input / output manipulation
using namespace std;

int main()
{
	//random number seed
	srand(static_cast<unsigned int>(time(0)));
	
	//declare and initialize variables
	int uTotal = 0, dTotal = 0; //uTotal -> user total, dTotal -> dealer total
	char choice;                //choice -> user input
	int rNum, suit;				//rNum   -> random number, suit -> random suit
	
	//output
	cout << "Single-Hand BlackJack" << endl;
	cout << "Your first card: ";
	
	/*    calculating/getting cards    */
	/*    User card     */
	//setting rNum to a random number between 1 and 13 (inclusive)
	rNum = (rand() % 13) + 1;
	
	//switch for number card
	switch(rNum)
	{
		case 1:
		{
			cout << "A";
			uTotal += 1; 
			break;
		}
		case 2: cout << "2"; uTotal += 2; break;
		case 3: cout << "3"; uTotal += 3; break;
		case 4: cout << "4"; uTotal += 4;break;
		case 5: cout << "5"; uTotal += 5;break;
		case 6: cout << "6"; uTotal += 6;break;
		case 7: cout << "7"; uTotal += 7;break;
		case 8: cout << "8"; uTotal += 8;break;
		case 9: cout << "9"; uTotal += 9;break;
		case 10: cout << "10"; uTotal += 10;break;
		case 11: cout << "J"; uTotal += 10;break;
		case 12: cout << "Q"; uTotal += 10;break;
		case 13: cout << "K"; uTotal += 10;break;
	}
	
	//setting suit to a random number between 1 and 4 (inclusive)
	suit = (rand() % 4) + 1;
	
	//switch for suit
	switch(suit)
	{
		case 1: cout << "C" << endl; break;
		case 2: cout << "D" << endl; break;
		case 3: cout << "S" << endl; break;
		case 4: cout << "H" << endl; break;
	}
	cout << "Your total: " << uTotal << endl;
	
	
	cout << "\nDealer's first card: ";
	/*    Dealer Card    */
	//setting rNum to a random number between 1 and 13 (inclusive)
	rNum = (rand() % 13) + 1;
	
	//switch for number card
	switch(rNum)
	{
		case 1:
		{
			cout << "A";
			dTotal += 1;
			break;
		}
		case 2: cout << "2"; dTotal += 2; break;
		case 3: cout << "3"; dTotal += 3; break;
		case 4: cout << "4"; dTotal += 4;break;
		case 5: cout << "5"; dTotal += 5;break;
		case 6: cout << "6"; dTotal += 6;break;
		case 7: cout << "7"; dTotal += 7;break;
		case 8: cout << "8"; dTotal += 8;break;
		case 9: cout << "9"; dTotal += 9;break;
		case 10: cout << "10"; dTotal += 10;break;
		case 11: cout << "J"; dTotal += 10;break;
		case 12: cout << "Q"; dTotal += 10;break;
		case 13: cout << "K"; dTotal += 10;break;
	}
	
	//setting suit to a random number between 1 and 4 (inclusive)
	suit = (rand() % 4) + 1;
	
	//switch for suit
	switch(suit)
	{
		case 1: cout << "C" << endl; break;
		case 2: cout << "D" << endl; break;
		case 3: cout << "S" << endl; break;
		case 4: cout << "H" << endl; break;
	}
	cout << "Dealer total: " << dTotal << endl;
	
	/*    User card    */
	cout << "\nYour second card: ";
	
	//setting rNum to a random number between 1 and 13 (inclusive)
	rNum = (rand() % 13) + 1;
	
	//switch for number card
	switch(rNum)
	{
		case 1:
		{
			cout << "A";
			uTotal += 1;
			break;
		}
		case 2: cout << "2"; uTotal += 2; break;
		case 3: cout << "3"; uTotal += 3; break;
		case 4: cout << "4"; uTotal += 4;break;
		case 5: cout << "5"; uTotal += 5;break;
		case 6: cout << "6"; uTotal += 6;break;
		case 7: cout << "7"; uTotal += 7;break;
		case 8: cout << "8"; uTotal += 8;break;
		case 9: cout << "9"; uTotal += 9;break;
		case 10: cout << "10"; uTotal += 10;break;
		case 11: cout << "J"; uTotal += 10;break;
		case 12: cout << "Q"; uTotal += 10;break;
		case 13: cout << "K"; uTotal += 10;break;
	}
	
	//setting suit to a random number between 1 and 4 (inclusive)
	suit = (rand() % 4) + 1;
	
	//switch for suit
	switch(suit)
	{
		case 1: cout << "C" << endl; break;
		case 2: cout << "D" << endl; break;
		case 3: cout << "S" << endl; break;
		case 4: cout << "H" << endl; break;
	}
	
	cout << "Your total: " << uTotal << endl;
	
	//exit stage right!
	return 0;
}