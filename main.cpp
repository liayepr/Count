#include <iostream>
using namespace std;

class Counter
{
private:
	static int count; //static member

public:
	//default constructor 
	Counter()
	{
		count++;
	}
	//static member function
	static void Print()
	{
		cout << "Total objects are: " << count << endl;
	}
};

//count initialization with 0
int Counter::count = 0;

int main()
{
	Counter obj1;
	obj1.Print();

	Counter obj2;
	obj2.Print();

	Counter obj3;
	obj3.Print();

	system("pause");
}