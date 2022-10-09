#include <iostream>
using namespace std;

// class Arithmetic
// {
// private:
// 	int a;
// 	int b;
// public:
// 	// initialising a and b
// 	Arithmetic(int a,int b)
// 	{
// 		this->a=a; // this refers to a member of a class 
// 		this->b=b; // this is a pointer to current object
// 	}
// 	int add()
// 	{
// 		int c;
// 		c=a+b;
// 		return c;
// 	}
// 	int sub()
// 	{
// 		int c;
// 		c=a-b;
// 		return c;
// 	}
// };

// int main()
// {
// 	Arithmetic ar(10,5); // ar is object
// 	// Arithmetic ar(10,5),ar2(15,7);
	
// 	cout << "Add : " << ar.add() << endl;
// 	cout << "Sub : " << ar.sub() << endl;
// 	return 0;
// }

//----------------------------------------------------------
// now implementing function outside the class
//----------------------------------------------------------

// class Arithmetic
// {
// private:
// 	int a;
// 	int b;
// public:
// 	Arithmetic(int a,int b);
// 	int add();
// 	int sub();
// };
// Arithmetic::Arithmetic(int a,int b)
// 	{
// 		this->a=a;
// 		this->b=b;
// 	}
// int Arithmetic::add()
// 	{
// 		int c;
// 		c=a+b;
// 		return c;
// 	}
// int Arithmetic::sub()
// 	{
// 		int c;
// 		c=a-b;
// 		return c;
// 	}


// int main()
// {
// 	Arithmetic ar(10,5);
	
// 	cout << "Add : " << ar.add() << endl;
// 	cout << "Sub : " << ar.sub() << endl;
// 	return 0;
// }

//----------------------------------------------------------
// now converting to template
//----------------------------------------------------------

template<class T>
class Arithmetic
{
private:
	T a;
	T b;
public:
	Arithmetic(T a,T b);
	T add();
	T sub();
};
template<class T>
Arithmetic<T>::Arithmetic(T a,T b)
	{
		this->a=a;
		this->b=b;
	}
template<class T>
T Arithmetic<T>::add()
	{
		T c;
		c=a+b;
		return c;
	}
template<class T>
T Arithmetic<T>::sub()
	{
		T c;
		c=a-b;
		return c;
	}


int main()
{
	// Arithmetic<int> ar(10,5);
	// Arithmetic<float> ar(10.99,5.44);
	
	
	// cout << "Add : " << ar.add() << endl;
	// cout << "Sub : " << ar.sub() << endl;
	
	Arithmetic<char> ar('A','B');
	
	cout << "Add : " << (int)ar.add() << endl;
	cout << "Sub : " << (int)ar.sub() << endl;
	
	return 0;
}
