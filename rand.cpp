#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main()
{
int randVal;

srand(time(NULL));

randVal = rand() % 10 - 1;

cout<<randVal<<endl;
}
