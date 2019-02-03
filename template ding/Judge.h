#pragma once
#include "std_file.h"
#include "Person.h"
#include "Judge_report.h"
// derived/child class from Judge_report and Person

class Judge :  public Person,  public Judge_report
{
private:
	//Member variables
	int new_registration_number;
	int new_expiration_year_new;

public:
	//Default constructor
	Judge();

	//Overload constructor
	Judge(int, int, string, string, string, string, string, int ,int );

	//Deconstructor
	~Judge();

	//Accessor
	int get_registration_number() const;
	int get_expiration_year_new() const;

	//Mutator functions
	void set_registration_number(int);
	void set_expiration_year_new(int);

	//Print functions
	friend ostream& operator<<(ostream&, const Judge& number);
};