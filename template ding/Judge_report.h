#pragma once
#include "std_file.h"
//Parent class for Judge

class Judge_report
{
	/* Protected data is data that the child class still can implement and use but other classes that aren't the child class are not possible to
	access these data's. I use protected because my program doesn't work if I use the get function from the class so I have to use the new functions 
	and this works and will print it on the users screen. */
protected:
	//member variables
	string new_examination_result;
	string new_advice_optional;
	string new_license_plate_information;
	int new_month_now;
	int new_year_now;

public:
	//Default constructor
	Judge_report();

	//Overload constructor
	Judge_report(string, string, string, int, int);

	//Deconstructor
	~Judge_report();

	//Accessor
	string get_examination_result() const;
	string get_advice_optional() const;
	string get_license_plate_information() const;
	int get_month_now() const;
	int get_year_now() const;

	//Mutator functions
	void set_examination_result(string);
	void set_advice_optional(string);
	void set_license_plate_information(string);
	void set_month_now(int);
	void set_year_now(int);

};
