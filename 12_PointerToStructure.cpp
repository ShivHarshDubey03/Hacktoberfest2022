# include <iostream>
# include <stdio.h>
# include <stdlib.h>

using namespace std;

struct Rectangle 
{
	int length;
	int breadth;
};

int main(){
	// struct Rectangle r={10,5};
	// Rectangle r={10,5};
	// in C++, removing struct also is valid
	// cout << r.length << endl;
	// cout << r.breadth << endl;
	
	// Rectangle *p=&r; // pointer p pointing to a structure r
	// cout << p->length << endl;
	// cout << p->breadth << endl;
	
	// creating rectangle structure in heap (dynamic allocation of rectangle structure)
	// Rectangle *p;
	// in C language
	// p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
	// in C++ language
	// p=new Rectangle;// create rectangle object in heap
	// p->length = 15;
	// p->breadth = 7;
	
	// cout << p->length << endl;
	// cout << p->breadth << endl;
	return 0;
}



