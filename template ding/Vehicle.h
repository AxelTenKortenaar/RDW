#pragma once
#include "std_file.h"

//parent class for motor, car & truck
class Vehicle
{
	/* Protected data is data that the child class still can implement and use but other classes that aren't the child class are not possible to
	access these data's. I use protected because my program doesn't work if I use the get function from the class so I have to use the new functions
	and this works and will print it on the users screen. */
protected:
	//Member variables
	int new_APK_expiration_month_old;
	int new_APK_expiration_year_old;
	string new_VIN;

public:
	//Default constructor
	Vehicle();

	//Overload constructor
	Vehicle(int, int, string);

	//Deconstructor
	~Vehicle();

	//Accessor
	int get_APK_expiration_month_old() const;
	int get_APK_expiration_year_old() const;
	string get_VIN() const;

	//Mutator functions
	void set_APK_expiration_month_old(int);
	void set_APK_expiration_year_old(int);
	void set_VIN(string);

};
