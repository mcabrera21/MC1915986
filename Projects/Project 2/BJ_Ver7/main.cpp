/* 
 * File:   main.cpp
 * Author: Mario Cabrera
 * Created on July 26, 2016, 9:04 PM
 * Purpose: Project 2
 */

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
int main(){
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
	bool valid;    //validation boolean
	
	//retrieve money from the file;
	ifstream in;    //ifstream variable
	in.open("money.txt");
	in>>money;
	in.close();
	
	cout<<endl;
	cout<<"		  Welcome to Blackjack!"<<endl;
	cout<<endl;
	cout<<"Starting with two card and adding accordingly,"<<endl;
	cout<<"you must get closer to 21 than the dealer. But"<<endl;
	cout<<"be warned, if you go over 21, you lose"<<endl;
	cout<<"automatically and lose your bet. Don't worry,"<<endl;
	cout<<"if you run out of funds, we will gift you more."<<endl;
	cout<<endl;
	cout<<"		   Suits"<<endl;
	cout<<"		h = hearts"<<endl;
	cout<<"		d = diamonds"<<endl;
	cout<<"		s = spades"<<endl;
	cout<<"		c = clubs"<<endl;
	cout<<endl;
	cout<<"		   Face Cards"<<endl;
	cout<<"		J = Jack"<<endl;
	cout<<"		Q = Queen"<<endl;
	cout<<"		K = King"<<endl;
	cout<<"		A = Ace"<<endl;
	cout<<endl;
	cout<<"        Enjoy the game and have fun!"<<endl;
	cout<<endl;
	
	do{
		cout<<endl;
		
		//if player money is less than minimum bet, recharge $100
		if(money==0 || money<min){
			cout<<"You have been recharged $100 because you have funds below the minimum bet"<<endl;
			money = 100;
		}
		
		do{
			//set valid = true
			valid=true;
			
			cout<<"You have $"<<money<<". How much do you want to bet?"<<endl;
			cout<<"Minimum bet is $"<<min<<"."<<endl;
			
			//bet input
			cin>>bet;
			
			cout<<endl;
			
			//check bet against minimum bet
			if(bet<min){
				cout<<"You entered a bet that was lower than the minimum bet"<<endl;
				cout<<endl;
				
				//if bet is less than minimum bet, set valid = false
				valid=false;
			}
			
			//check bet against player money
			if(bet>money){
				cout<<"You entered a bet that was higher than the money you have"<<endl;
				cout<<endl;
				
				//if bet is more than player money, set valid = false
				valid=false;
			}
		}while(valid==false);
		
		
		play=true;
		lose=false;
		pTotal=0;
		dTotal=0;
		//get first cards
		//player card
		card = rand()%52;
		cout<<"Player's first card: "<<deck[card]<<endl;
		cout<<endl;
		addValue(pTotal,cValues,card);
		
		//dealer card
		card = rand()%52;
		cout<<"Dealer's first card: "<<deck[card]<<endl;
		cout<<endl;
		addValue(dTotal,cValues,card);
		
		//player card
		card = rand()%52;
		cout<<"Player's next card: "<<deck[card]<<endl;
		cout<<endl;
		addValue(pTotal,cValues,card);
		
		//output totals
		cout<<fixed;
		cout<<"Player's Total = "<<setw(2)<<pTotal<<endl;
		cout<<"Dealer's Total = "<<setw(2)<<dTotal<<endl;
		cout<<endl;
		
		while(play==true){
			//user input of h or s
			cout<<"hit or stay? [h]/[s]"<<endl;
			cin>>choice;
			
			
			switch(choice){
				case 'h':{
					//player card
					card = rand()%52;
					cout<<"Player's next card: "<<deck[card]<<endl;
					cout<<endl;
					addValue(pTotal,cValues,card);
					
					//output totals
					cout<<fixed;
					cout<<"Player's Total = "<<setw(2)<<pTotal<<endl;
					cout<<"Dealer's Total = "<<setw(2)<<dTotal<<endl;
					cout<<endl;
		
					//if player's total is greater than or equal to 21, stop
					if(pTotal==21 || pTotal>21){
						play=false;
						
						if(pTotal>21){
							cout<<"Bust. You lose."<<endl;
							
							//bet subtracted from total for loss
							money-=bet;
							
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
					cout<<endl;
				}
			}
		}
		
		if(lose==false){
			//dealer card
			card = rand()%52;
			cout<<"Dealer's next card: "<<deck[card]<<endl;
			cout<<endl;
			addValue(dTotal,cValues,card);
			
			//output totals
			cout<<fixed;
			cout<<"Player's Total = "<<setw(2)<<pTotal<<endl;
			cout<<"Dealer's Total = "<<setw(2)<<dTotal<<endl;
			cout<<endl;
			
			while(dTotal<17){
				//dealer card
				card = rand()%52;
				cout<<"Dealer's next card: "<<deck[card]<<endl;
				cout<<endl;
				addValue(dTotal,cValues,card);
				
				//output totals
				cout<<fixed;
				cout<<"Player's Total = "<<setw(2)<<pTotal<<endl;
				cout<<"Dealer's Total = "<<setw(2)<<dTotal<<endl;
				cout<<endl;
			}
			
			//if dealer total > 21, dealer bust
			if(dTotal>21){
				cout<<"Dealer Bust. You win!"<<endl;
				cout<<endl;
				
				//money added for win
				money+=bet;
				
			//if player total > dealer total, player win
			}else if(pTotal>dTotal){
				cout<<"You beat the dealer. You win!"<<endl;
				cout<<endl;
				
				//money added for win
				money+=bet;
				
			//if player total < dealer total, player lose
			}else if(pTotal<dTotal){
				cout<<"The dealer beat you. You lose"<<endl;
				cout<<endl;
				
				//bet subtracted from total for loss
				money-=bet;
				
			//if player total == dealer total, draw.
			}else if(pTotal==dTotal){
				cout<<"Push. Draw."<<endl;
				cout<<endl;
			}
		}
		
		//saving money to a file
		cout<<"Saving..."<<endl;
		cout<<endl;
		save(money);
		
		//play again choice with validation
		do{
			cout<<"Do you want to play again? [y]/[n]"<<endl;
			cin>>choice;
		
			cout<<endl;
			
			//if choice is invalid, error message
			if(choice!='y' && choice!='n'){
				cout<<"You did not enter a valid choice"<<endl;
				cout<<endl;
			}
		}while(choice!='y' && choice!='n');
	}while(choice=='y');
	
	
	cout<<"Thanks for playing. Until next time"<<endl;
	
	
	//exit stage right!
	return 0;
}


/*********************************
 *
 *
 *	addValue(int &, int [], int)
 *
 *
 *********************************/
void addValue(int &total, int value[],int card){
	total+=value[card];
}


/*****************************
 *
 *
 *		save(int)
 *
 *
 *****************************/
void save(int money){
	ofstream out;           //ofstream variable
	out.open("money.txt");  //opening file
	out<<money;				//outputing money to file
	out.close();			//closing file
}
