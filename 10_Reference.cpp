#include <iostream>

using namespace std;

int main()
{
	int a=10;
	int &r = a;
	// int r -> data variable
	// int *r -> pointer variable
	// int &r -> reference variable
	// while declaring a reference, initializaion is important
	// reference doesn't consume any memory
	
	// int b=25;
	// r=b; // this is assignment. r is not reference to b, it will take the value of b and a will become 25 
	
	a = 25;
	cout << a << endl << r << endl;
	

}


