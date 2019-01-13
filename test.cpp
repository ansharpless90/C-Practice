#include<iostream>
#include<new>
using namespace std;

int main()
{
/*
int b;
b = 5;
cout <<"B is " << b << endl;

int& a = b;

cout <<"A is " << a << endl;

a = 10;

cout <<"B is now " << b << endl;
*/

/*
const int ARRAYSIZE = 5;

int *gPtr;
int i, grade[ARRAYSIZE] = {98, 87, 92, 79, 85};

gPtr = &grade[0];
for ( i = 0; i < ARRAYSIZE; i++)
  cout <<"\nElement " << i << " is " << *(gPtr + i);
cout << endl;
*/

int numgrades, i;
cout <<"Enter the number of grades to be processed: ";
 cin >>numgrades;

int *grades = new int[numgrades]; //create the array

for(i = 0; i < numgrades; i++)
{
 cout << " Enter a grade: ";
  cin >> grades[i];
}

cout <<"\nAn array was created for " << numgrades << " integers\n";
cout <<" The values stored in the array are:";
for (i = 0; i < numgrades; i++)
 cout <<"\n   " << grades[i];
cout << endl;

delete[] grades;

return 0;
}
