//Binary Converter Program
//Author Adrian Sharpless
//Last modification date: 06/01/18

//    0    0    0   0   0   0  0  0  0  0
//  512  256  128  64  32  16  8  4  2  1
#include <iostream>
using namespace std;

int main(){
int size = 9;
int number;
int binaryNumber[0];
string choice ="NULL";
//Ask user to convert betwwen decimal and binary or binary and decimal
cout<<"Hello User, would you like to start with decimal or binary?"<<endl;
cin >>choice;
if (choice =="decimal")
    cout<<"You chose decimal"<<endl;
/*

cout<<endl<<endl<<endl;
cout<<"Enter your number: ";
 cin>> number;
 
 */
else if (choice =="binary")
    cout<<"You chose binary"<<endl;
  
else
   cout<<"Invalid option"<<endl;
  
//Obtain the value that the user wishes to convert
cout<<endl<<endl<<endl;
cout <<"Enter your number: ";
 cin >>number;

//create array to hold binary values
int binaryArray[size];
for (int i = 0; i < size; i++)
{
 binaryArray[i] = 0;
}

while(number > 0){
  
  if(number >= 512){
    binaryArray[0] = 1;
    number-=512;
    }
  
  if(number >= 256){
    binaryArray[1] = 1;
    number -=256;
    }

  if(number >= 128){
    binaryArray[2] = 1;
    number -= 128;
    }

  if(number >= 64){
    binaryArray[3] = 1;
    number -= 64;
    }

  if(number >= 32){
    binaryArray[4] = 1;
    number -= 32;
    }

  if(number >= 16){
    binaryArray[5] = 1;
    number -= 16;
    }

  if(number >= 8){
    binaryArray[6] = 1;
    number -= 8;
    }

  if(number >= 4){
    binaryArray[7] = 1;
    number -= 4;
    }

  if(number >= 2){
    binaryArray[8] = 1;
    number -= 2;
    }

  if(number >= 1){
    binaryArray[9] = 1;
    number -= 1;
    }
   }//end of while loop

cout<<"Number in binary is: ";
//Display results
for(int n = 0; n<size; n++){
cout<<binaryArray[n];
   }
cout <<endl<<endl<<endl;


return 0;
}
