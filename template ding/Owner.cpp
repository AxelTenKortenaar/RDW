#include "Owner.h"
#include "std_file.h"

//Default constructor
Owner::Owner()
{
	new_other_information;
}

//Overload constructor
Owner::Owner(string other_information, string first_name, string last_name)
	: Person(first_name, last_name)
{
	new_other_information = other_information;
}

//Deconstructor
Owner::~Owner()
{
}

//Get function
string Owner::get_other_information() const
{
	return new_other_information;
}

//Mutator function
void Owner::set_other_information(string other_information)
{
	new_other_information = other_information;
}

//This will print out the data that the user puts in.
ostream & operator<<(ostream & os, const Owner & other)
{
	os << "The name of the owner from this vehicle is: " << other.new_first_name << " " << other.new_last_name << endl
		<<	"Other information from the owner is: " << other.new_other_information << endl;
	return os;
}