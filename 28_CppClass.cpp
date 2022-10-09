#include <iostream> // for cin & cout 

using namespace std;

class Rectangle
{
	private :
		int length;
		int breadth;
		
	public :
		Rectangle () // default constructor
		{
			length=0;
			breadth=0;
		} 
		Rectangle(int l, int b) // parametrised constructor
		{
			length = l;
			breadth = b;
		}
		int area() // actual methods
		{
			return length*breadth;
		}
		int perimeter() // actual methods
		{
			return 2*(length+breadth);
		}
		void setLength(int l) // mutator functions // for writing property length
		{ 
			length = l;
		}
		void setBreadth(int b) // mutator functions // for writing property breadth
		{ 
			breadth = b;
		}
		int getLength() // accessor functions // for reading property length
		{ 
			return length;
		}
		int getBreadth() // accessor functions // for reading property breadth
		{ 
			return breadth;
		}
		~Rectangle() 
		{
			cout << "Destructor" << endl;
		}
};

int main()
{
	Rectangle r(10,5);
	cout << "Area : " << r.area() << endl;
	cout << "Perimeter : " << r.perimeter() << endl;
	r.setLength(20);
	cout << "Length : " << r.getLength() << endl;
}
// once the main function ends, the distructor will be automatically called because the object is going outside the scope // function ends // object will be destroyed
