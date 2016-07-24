//system libraries
#include <iostream>  //Input / Output library
#include <cstdlib>   //C standard library
#include <ctime>     //C Time
#include <iomanip>   //input / output manipulation
#include <fstream>   //file stream library
using namespace std;

//user libraries

//global constants

//function prototypes
void save();					 //save money to file
void addValue(int, int []);      //add value of card to total
void shuffle(int [], string []); //shuffle the deck

//execution begins here
int main()
{
	//random number seed
	srand(static_cast<unsigned int>(time(0)));
	
	//declare and initialize variables
	const int SIZE = 52;  //const size of array (52 cards)
	int cValues[sIZE] = {1,2,3,4,5,6,7,8,9,10,10,10,10,
				     1,2,3,4,5,6,7,8,9,10,10,10,10,
				     1,2,3,4,5,6,7,8,9,10,10,10,10,
				     1,2,3,4,5,6,7,8,9,10,10,10,10};
	string deck[SIZE] = {"Ac","2c","3c","4c","5c","6c","7c","8c","9c","10c","Jc","Qc","Kc",
						 "As","2s","3s","4s","5s","6s","7s","8s","9s","10s","Js","Qs","Ks",
						 "Ad","2d","3d","4d","5d","6d","7d","8d","9d","10d","Jd","Qd","Kd",
						 "Ah","2h","3h","4h","5h","6h","7h","8h","9h","10h","Jh","Qh","Kh"};
	
	
	
	//exit stage right!
	return 0;
}
