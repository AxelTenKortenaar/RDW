#include "std_file.h"
#include "Person.h"

//Default constructor
Person::Person()
{
	new_first_name;
	new_last_name;
}

//Overload constructor
Person::Person(string first_name, string last_name)
{
	new_first_name = first_name;
	new_last_name = last_name;
}

//Deconstructor
Person::~Person()
{
}

//Accessor
string Person::get_first_name() const
{
	return new_first_name;
}

string Person::get_last_name() const
{
	return new_last_name;
}
//End of accessor

//Mutator functions
void Person::set_first_name(string first_name)
{
	new_first_name = first_name;
}

void Person::set_last_name(string last_name)
{
	new_last_name = last_name;
}
//End of mutator functions