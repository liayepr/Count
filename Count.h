#pragma once
#include <iostream>
using namespace std;

class Counter
{
private:
	static int count; //static member

public:
	//default constructor 
	Counter();
	// copy constructor
	Counter(const Counter &c);

	// assignment=
	Counter& operator=(const Counter & c); // assignment operator
	
	// destructor
	~Counter()
	{
		count--;
	}

	//static member function
	static void Print();

};
