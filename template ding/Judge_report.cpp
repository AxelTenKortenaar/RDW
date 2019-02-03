#include "std_file.h"
#include "Judge_report.h"

//Default constructor
Judge_report::Judge_report()
{
	new_examination_result;
	new_advice_optional;
	new_license_plate_information;
	new_month_now = 0;
	new_year_now = 0;
}

//Overload constructor
Judge_report::Judge_report(string examination_result, string advice_optional, string license_plate_information, int month_now, int year_now)
{
	new_examination_result = examination_result;
	new_advice_optional = advice_optional;
	new_license_plate_information = license_plate_information;
	new_month_now = month_now;
	new_year_now = year_now;
}

//Deconstructor
Judge_report::~Judge_report()
{
}

//get functions for returning
string Judge_report::get_examination_result() const
{
	return new_examination_result;
}

string Judge_report::get_advice_optional() const
{
	return new_advice_optional;
}

string Judge_report::get_license_plate_information() const
{
	return new_license_plate_information;
}

int Judge_report::get_month_now() const
{
	return new_month_now;
}

int Judge_report::get_year_now() const
{
	return new_year_now;
}
//End of get functions

//Sets new data in the class
void Judge_report::set_examination_result(string examination_result)
{
	new_examination_result = examination_result;
}

void Judge_report::set_advice_optional(string advice_optional)
{
	new_advice_optional = advice_optional;
}

void Judge_report::set_license_plate_information(string license_plate_information)
{
	new_license_plate_information = license_plate_information;
}

void Judge_report::set_month_now(int month_now)
{
	new_month_now = month_now;
}

void Judge_report::set_year_now(int year_now)
{
	new_year_now = year_now;
}
// end of setting new data