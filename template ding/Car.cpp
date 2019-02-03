#include "std_file.h"
#include "Car.h"
#include "Vehicle.h"

//Default constructor
Car::Car()
{
	new_brightness_car = 0;
	new_degrees_car = 0;
	new_color_temperature_car = 0;
	new_cylinder_volume_car = 0;
	new_brakes_car = 0;
	new_critical_tire_car = 0.0;
}

//Overload constructor
Car::Car(int brightness_car, int degrees_car, int color_temperature_car, int cylinder_volume_car, int brakes_car, double critical_tire_car, 
	int APK_expiration_month_old, int APK_expiration_year_old, string VIN)
	: Vehicle(APK_expiration_month_old, APK_expiration_year_old, VIN)
{
	// everything after = put in the main
	new_brightness_car = brightness_car;
	new_degrees_car = degrees_car;
	new_color_temperature_car = color_temperature_car;
	new_cylinder_volume_car = cylinder_volume_car;
	new_brakes_car = brakes_car;
	new_critical_tire_car = critical_tire_car;
}

//deconstructor
Car::~Car()
{
}

//get functions for returning
int Car::get_brightness_car() const
{
	return new_brightness_car;
}

int Car::get_degrees_car() const
{
	return new_degrees_car;
}

int Car::get_color_temperature_car() const
{
	return new_color_temperature_car;
}

int Car::get_cylinder_volume_car() const
{
	return new_cylinder_volume_car;
}

int Car::get_brakes_car() const
{
	return new_brakes_car;
}

double Car::get_critical_tire_car() const
{
	return new_critical_tire_car;
}
//end of get functions

//sets new data
void Car::set_brightness_car(int brightness_car)
{
	new_brightness_car = brightness_car;
}

void Car::set_degrees_car(int degrees_car)
{
	new_degrees_car = degrees_car;
}

void Car::set_color_temperatur_car(int color_temperatur_car)
{
	new_color_temperature_car = color_temperatur_car;
}

void Car::set_cylinder_volume_car(int cylinder_volume_car)
{
	new_cylinder_volume_car = cylinder_volume_car;
}

void Car::set_brakes_car(int brakes_car)
{
	new_brakes_car = brakes_car;
}

void Car::set_critical_tire_car(double critical_tire_car)
{
	new_critical_tire_car = critical_tire_car;
}
//end of setting new data

// This will print out the data that the user puts in.
ostream& operator<<(ostream& os, const Car& thing)
{
	os << "The 'old' expiration date for the car is: " << thing.new_APK_expiration_month_old << "/" << thing.new_APK_expiration_year_old << endl <<
		"The vehicle indentification number (VIN) is: " << thing.new_VIN << endl <<
		"The brightness of the headlights from the car is: " << thing.new_brightness_car << " lm" << endl <<
		"The degrees of the headlight from the car is: " << thing.new_degrees_car << "°" << endl <<
		"The color temperature of the headlights from the car is: " << thing.new_color_temperature_car << " K" << endl <<
		"The cylinder volume of the car is: " << thing.new_cylinder_volume_car << " cm^2" << endl <<
		"The relative brake percentage is: " << thing.new_brakes_car << "%" << endl <<
		"The profile thickness of the most critical tire from the car is: " << thing.new_critical_tire_car << " mm" << endl;
	return os;
}
