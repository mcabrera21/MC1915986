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
void save(int);					 //save money to file
void addValue(int &, int [],int);//add value of card to total

//execution begins here
int main()
{
	//random number seed
	srand(static_cast<unsigned int>(time(0)));
	
	//declare and initialize variables
	const int SIZE = 52;  //const size of array (52 cards)
	int cValues[SIZE] = {1,2,3,4,5,6,7,8,9,10,10,10,10,
						 1,2,3,4,5,6,7,8,9,10,10,10,10,
						 1,2,3,4,5,6,7,8,9,10,10,10,10,
						 1,2,3,4,5,6,7,8,9,10,10,10,10};
	string deck[SIZE] = {"Ac","2c","3c","4c","5c","6c","7c","8c","9c","10c","Jc","Qc","Kc",
						 "As","2s","3s","4s","5s","6s","7s","8s","9s","10s","Js","Qs","Ks",
						 "Ad","2d","3d","4d","5d","6d","7d","8d","9d","10d","Jd","Qd","Kd",
						 "Ah","2h","3h","4h","5h","6h","7h","8h","9h","10h","Jh","Qh","Kh"};
	
	int money;     //total money player has
	int min = 5;   //minimum bet
	int bet;       //player's bet
	int pTotal = 0;//total value of cards player has
	int dTotal = 0;//total value of cards dealer has
	char choice;   //user input
	int card;      //card index
	bool play;     //play boolean
	bool lose;     //lose boolean
	
	//retrieve money from the file;
	ifstream in;    //ifstream variable
	in.open("money.txt");
	in>>money;
	in.close();
	
	//if player money is less than minimum bet, recharge $100
	if(money==0 || money<min){
		cout<<"You have been recharged $100 because you have funds below the minimum bet"<<endl;
		money = 100;
	}
	
	do{
		play=true;
		lost=false;
		//get first cards
		//player card
		card = rand()%52;
		cout<<"Player's first card: "<<deck[card]<<endl<<endl;
		addValue(pTotal,cValues,card);
		
		//dealer card
		card = rand()%52;
		cout<<"Dealer's first card: "<<deck[card]<<endl<<endl;
		addValue(dTotal,cValues,card);
		
		//player card
		card = rand()%52;
		cout<<"Player's next card: "<<deck[card]<<endl<<endl;
		addValue(pTotal,cValues,card);
		
		cout<<"Player's Total = "<<pTotal<<endl;
		cout<<"Dealer's Total = "<<dTotal<<endl;
		
		while(play==true){
			//user input of h or s
			cout<<"hit or stay? [h]/[s]"<<endl;
			cin>>choice;
			
			
			switch(choice){
				case 'h':{
					//player card
					card = rand()%52;
					cout<<"Player's next card: "<<deck[card]<<endl<<endl;
					addValue(pTotal,cValues,card);
					
					//if player's total is greater than or equal to 21, stop
					if(pTotal==21 || pTotal>21){
						play=false;
						
						if(pTotal>21){
							cout<<"Bust. You lose."<<endl;
							lose=true;
						}
					}
					break;
				}
				case 's':{
					play=false;
					break;
				}
				default:{
					cout<<"You did not enter a valid choice"<<endl;
				}
			}
		}
		
		
		
		do{
			cout<<"Do you want to play again? [y]/[n]"<<endl;
			cin>>choice;
		
			if(choice!='y' && choice!='n'){
				cout<<"You did not enter a valid choice"<<endl;
			}
		}while(choice!='y' && choice!='n');
	}while(choice=='y');
	
	
	//saving money to a file
	save(money);
	
	//exit stage right!
	return 0;
}

/*********************************
 *
 *	addValue(int &, int [], int)
 *
 *********************************/
void addValue(int &total, int value[],int card){
	total+=value[card];
}

/*****************************
 *
 *		save(int)
 *
 *****************************/
void save(int money){
	ofstream out;           //ofstream variable
	out.open("money.txt");  //opening file
	out<<money;				//outputing money to file
	out.close();			//closing file
}

