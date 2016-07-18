/* File:   main.cpp
 * Author: Mario Cabrera
 * Created on July 13, 2016, 5:34 PM
 * Project: Black Jack Version 3
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
	bool lose = false;
	
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
	
	
cout << "Your total:     " << setw(2) << uTotal << endl;
	cout << "Dealer's total: " << setw(2) << dTotal << endl;
	
	do
	{
		cout << "[H]it or [S]tay: ";
		cin >> choice;
		
		switch(choice)
		{
			case 'h':
			case 'H': 
			{
				cout << "\nYour next card: ";
	
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
				
				cout << "Your total:     " << setw(2) << uTotal << endl;
				cout << "Dealer's total: " << setw(2) << dTotal << endl;
				
				if(uTotal > 21)
				{
					cout << "You busted over 21. You lose" << endl;
					lose = true;
					break;
				}
				
				break;
			}
			case 's':
			case 'S': break;
			default: cout << "You did not enter a valid response" << endl; break;
		}
		cout << endl;
	}while((choice != 's' && choice != 'S') && lose == false);
	
	
	if(!lose)
	{
		while(dTotal < 17)
		{
			cout << "Dealer's next card: ";
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
			cout << "Your total:     " << setw(2) << uTotal << endl;
			cout << "Dealer's total: " << setw(2) << dTotal << endl;

			cout << endl;
		}
		if(dTotal > 21) cout << "Dealer busted. You win!" << endl;
		else if(uTotal == dTotal) cout << "push at " << uTotal << ". It's a draw!" << endl;
		else if(uTotal > dTotal)  cout << "You beat the dealer. You win!" << endl;
		else if(uTotal < dTotal) cout << "The dealer beat you. You lose!" << endl;
	}
	
	//exit stage right!
	return 0;
}