#include "Count.h"
#include <iostream>

using namespace std;

	Counter::Counter()
	{
		count++;
	}

	Counter::Counter(const Counter &c)
	{
		count++;
	}


	Counter& Counter::operator=(const Counter & c) 
	{
		return *this;
	}

	//static member function
	 void Counter::Print()
	{
		std::cout << "Total objects are: " << count << endl;
	}

