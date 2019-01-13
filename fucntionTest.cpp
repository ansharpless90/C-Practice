#include <iostream>
using namespace std;

//function declaration
float sum(int x, int y); //sum dec
int max(int u, int v);   //max dec
int pythag(int r, int t);//pathagorean theorem dec 
                         //a^2 + b^2 = c^2

int main()
{

int a = 1, b = 2;
int firstnum, secnum;
int ret;
int maxi;
int sideOne, sideTwo, sideThree;

ret = sum(a, b);//sum called

cout <<"The sum is, "<<ret<<endl;
//input for max function
cout <<"Please enter a first number"<<endl;
cin >> firstnum;
cout <<"Please enter a second number"<<endl;
cin >>secnum;
maxi = max(firstnum, secnum);//max called
cout <<"The maximum number is, "<<maxi<<endl;

//input for pythagorean function
cout<<"Please enter your first side"<<endl;
cin >>sideOne;
cout<<"Please enter your second side"<<endl;
cin >>sideTwo;
sideThree = pythag(sideOne, sideTwo);//pythag called
cout <<"Your third side is, "<<sideThree<<endl;
return 0;
}

//sum definition
float sum( int x, int y)
{


float z;
z = x + y;

return z;
}

//max definition
int max( int u, int v)
{

int maximum;

maximum = u;

if (v > u)
    maximum = v;
 
return maximum;

}
//pythagorean definition
int pythag(int r, int t)
{

int solution;

solution = ((r * r) + (t * t))/2;
return solution;
}
