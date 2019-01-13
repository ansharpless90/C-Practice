#include <iostream>
using namespace std;

int main(){

string cont = "yes";//Used to keep game running

//deck of cards
string ace_of_Spades;     string ace_of_Hearts;
string two_of_Spades;     string two_of_Hearts;
string three_of_Spades;   string three_of_Hearts;
string four_of_Spades;    string four_of_Hearts;
string five_of_Spades;    string five_of_Hearts;
string six_of_Spades;     string six_of_Hearts;
string seven_of_Spades;   string seven_of_Hearts;
string eight_of_Spades;   string eight_of_Hearts;
string nine_of_Spades;    string nine_of_Hearts;
string ten_of_Spades;     string ten_of_Hearts;
string J_of_Spades;       string J_of_Hearts;
string Q_of_Spades;       string Q_of_Hearts;
string K_of_Spades;       string K_of_Hearts;

string ace_of_Diamonds;     string ace_of_Clubs;
string two_of_Diamonds;     string two_of_Clubs;
string three_of_Diamonds;   string three_of_Clubs;
string four_of_Diamonds;    string four_of_Clubs;
string five_of_Diamonds;    string five_of_Clubs;
string six_of_Diamonds;     string six_of_Clubs;
string seven_of_Diamonds;   string seven_of_Clubs;
string eight_of_Diamonds;   string eight_of_Clubs;
string nine_of_Diamonds;    string nine_of_Clubs;
string ten_of_Diamonds;     string ten_of_Clubs;
string J_of_Diamonds;       string J_of_Clubs;
string Q_of_Diamonds;       string Q_of_Clubs;
string K_of_Diamonds;       string K_of_Clubs;

int suit = 3;
int card = 12;

int deck [suit][card];

cout <<"Hello and welcome to my game!"<<endl;

while(cont == "yes"){
cout<<"Would you like to continue?  ";
cin>>cont;
}

cout<<"Goodbye and thank you for playing!"<<endl;





return 0;
}
