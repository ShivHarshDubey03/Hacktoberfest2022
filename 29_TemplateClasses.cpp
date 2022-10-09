#include <iostream>
using namespace std;

// C++ program support generic function (template function) and generic classes (template classes)
// generic class means that the class can be user for any type of data

// class Arithametic
// {
// private:
// 	int a;
// 	int b;
// public:
// 	Arithametic(int a,int b);
// 	int add();
// 	int sub();
// };

// Arithametic::Arithametic(int a, int b)
// {
// 	this->a=a; // "this" is a pointer to current object
// 	this->b=b;
// }

// int Arithametic::add()
// {
// 	int c;
// 	c = a+b;
// 	return c;
// }

// int Arithametic::sub()
// {
// 	int c;
// 	c=a-b;
// 	return c;
// }

// convering to a gemeric class
template<class T>
class Arithametic
{
private:
	T a;
	T b;
public:
	Arithametic(T a,T b);
	T add();
	T sub();
};
template<class T>
Arithametic<T>::Arithametic(T a, T b)
{
	this->a=a; // "this" is a pointer to current object
	this->b=b;
}
template<class T>
T Arithametic<T>::add()
{
	T c;
	c = a+b;
	return c;
}
template<class T>
T Arithametic<T>::sub()
{
	T c;
	c=a-b;
	return c;
}
int main()
{
	// parameter is int type
	Arithametic<int> ar(10,5);
	cout << ar.add();
	// parameter is float type
	Arithametic<float> ar1(10,5);
	cout << ar1.add();
}
