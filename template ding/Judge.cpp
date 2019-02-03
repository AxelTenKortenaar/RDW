#include "Judge.h"
#include "Person.h"
#include "std_file.h"
#include "Judge_report.h"

//Default constructor
Judge::Judge()
{
	new_registration_number = 0;
}

//Overload constructor
Judge::Judge(int registration_number, int expiration_year_new, string first_name, string last_name, string examination_result, string advice_optional, string license_plate_information, int month_now, int year_now)
	: Person(first_name, last_name), Judge_report(examination_result, advice_optional, license_plate_information, month_now, year_now)
{
	new_registration_number = registration_number;
	new_expiration_year_new = year_now;
}

//Deconstructor
Judge::~Judge()
{
}

//Accessor functions
int Judge::get_registration_number() const
{
	return new_registration_number;
}

int Judge::get_expiration_year_new() const
{
	return new_expiration_year_new;
}
//End of accessor functions

//Mutator functions
void Judge::set_registration_number(int registration_number)
{
	new_registration_number = registration_number;
}

void Judge::set_expiration_year_new(int year_now)
{
	new_expiration_year_new = year_now + 1;
}
//End of mutator functions

/*This will print out the data that the user puts in,
and also the automatic advice & examination result that will filled in by the source code. */
ostream& operator<<(ostream& os, const Judge& number)
{
	os << "The following data is the judge report" << endl << endl <<
		"The judge who checked your vehicle is: " << number.new_first_name << " " << number.new_last_name << endl <<
		"His/Her registration number is: " << number.new_registration_number << endl <<
		"The date that the judge made the report is: " << number.new_month_now << "/" << number.new_year_now << endl <<
		"The examination result is: " << number.new_examination_result << endl <<
		"The advice from the judge is: " << number.new_advice_optional << endl <<
		"The license plate information is: " << number.new_license_plate_information << endl <<
		"The new expiration date for your vehicle is: " << number.new_month_now << "/" << number.new_expiration_year_new << endl;
	return os;
}