#include <iostream>
#include "Count.h"
using namespace std;


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

	Counter obj4;
	obj4 = obj2;
	obj4.Print();

	Counter obj5(obj2);
	obj5.Print();

	system("pause");
}