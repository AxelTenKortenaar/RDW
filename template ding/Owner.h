#pragma once
#include "std_file.h"
#include "Person.h"
//child class from Person

class Owner : public Person
{
protected:
	//member variables
	string new_other_information;

public:

	//Default constructor
	Owner();

	//Overload constructor
	Owner(string, string, string);

	//Deconstructor
	~Owner();

	//Accessor
	string get_other_information() const;

	//Mutator function
	void set_other_information(string);

	//Print function
	friend ostream& operator<<(ostream&, const Owner& other);
};