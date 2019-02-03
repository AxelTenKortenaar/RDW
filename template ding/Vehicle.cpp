#include "std_file.h"
#include "Vehicle.h"

//Default constructor
Vehicle::Vehicle()
{
	new_APK_expiration_month_old = 0;
	new_APK_expiration_year_old = 0;
	new_VIN;
}

//Overload constructor
Vehicle::Vehicle(int APK_expiration_month_old, int APK_expiration_year_old, string VIN)
{
	new_APK_expiration_month_old = APK_expiration_month_old;
	new_APK_expiration_year_old = APK_expiration_year_old;
	new_VIN = VIN;
}

//Deconstructor
Vehicle::~Vehicle()
{
}

//get functions
int Vehicle::get_APK_expiration_month_old() const
{
	return new_APK_expiration_month_old;
}

int Vehicle::get_APK_expiration_year_old() const
{
	return new_APK_expiration_year_old;
}

string Vehicle::get_VIN() const
{
	return new_VIN;
}
//end of get functions

//set functions
void Vehicle::set_APK_expiration_month_old(int APK_expiration_month_old)
{
	new_APK_expiration_month_old = APK_expiration_month_old;
}

void Vehicle::set_APK_expiration_year_old(int APK_expiration_year_old)
{
	new_APK_expiration_year_old = APK_expiration_year_old;
}

void Vehicle::set_VIN(string VIN)
{
	new_VIN = VIN;
}
//end of set functions