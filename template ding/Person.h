#pragma once
#include "std_file.h"

// Parent class for Owner & Judge

class Person
{
	/* Protected data is data that the child class still can implement and use but other classes that aren't the child class are not possible to
	access these data's. I use protected because my program doesn't work if I use the get function from the class so I have to use the new functions
	and this works and will print it on the users screen. */
protected:
	//Member variables
	string new_first_name;
	string new_last_name;

public:
	//Default constructor
	Person();

	//Overload constructor
	Person(string, string);

	//Deconstructor
	~Person();

	//Accessor
	string get_first_name() const;
	string get_last_name() const;

	//Mutator functions
	void set_first_name(string);
	void set_last_name(string);
};