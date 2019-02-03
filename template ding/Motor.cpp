#include "std_file.h"
#include "Motor.h"
#include "Vehicle.h"

//Default constructor
Motor::Motor()
{
	new_brightness_motor = 0;
	new_degrees_motor = 0;
	new_color_temperature_motor = 0;
	new_cylinder_volume_motor = 0;
	new_brakes_motor = 0;
	new_critical_tire_motor = 0.0;
}

//Overload constructor
Motor::Motor(int brightness_motor, int degrees_motor, int color_temperature_motor, int cylinder_volume_motor, int brakes_motor, double critical_tire_motor, 
	int APK_expiration_month_old, int APK_expiration_year_old, string VIN)
	: Vehicle(APK_expiration_month_old, APK_expiration_year_old, VIN)
{
	// everything after = put in the main
	new_brightness_motor = brightness_motor;
	new_degrees_motor = degrees_motor;
	new_color_temperature_motor = color_temperature_motor;
	new_cylinder_volume_motor = cylinder_volume_motor;
	new_brakes_motor = brakes_motor;
	new_critical_tire_motor = critical_tire_motor;
}

//deconstructor
Motor::~Motor()
{
}

//get functions for returning
int Motor::get_brightness_motor() const
{
	return new_brightness_motor;
}

int Motor::get_degrees_motor() const
{
	return new_degrees_motor;
}

int Motor::get_color_temperature_motor() const
{
	return new_color_temperature_motor;
}

int Motor::get_cylinder_volume_motor() const
{
	return new_cylinder_volume_motor;
}

int Motor::get_brakes_motor() const
{
	return new_brakes_motor;
}

double Motor::get_critical_tire_motor() const
{
	return new_critical_tire_motor;
}
//end of get functions

//sets new data
void Motor::set_brightness_motor(int brightness_motor)
{
	new_brightness_motor = brightness_motor;
}

void Motor::set_degrees_motor(int degrees_motor)
{
	new_degrees_motor = degrees_motor;
}

void Motor::set_color_temperatur_motor(int color_temperatur_motor)
{
	new_color_temperature_motor = color_temperatur_motor;
}

void Motor::set_cylinder_volume_motor(int cylinder_volume_motor)
{
	new_cylinder_volume_motor = cylinder_volume_motor;
}

void Motor::set_brakes_motor(int brakes_motor)
{
	new_brakes_motor = brakes_motor;
}

void Motor::set_critical_tire_motor(double critical_tire_motor)
{
	new_critical_tire_motor = critical_tire_motor;
}
//end of setting new data

//print all the data that is filled in by the user on the screen.
ostream& operator<<(ostream& os, const Motor& object)
{
	os << "The 'old' expiration date for the motor is: " << object.new_APK_expiration_month_old << "/" << object.new_APK_expiration_year_old << endl <<
		"The vehicle indentification number (VIN) is: " << object.new_VIN << endl <<
		"The brightness of the headlights from the motor is: " << object.new_brightness_motor << " lm" <<endl <<
		"The degrees of the headlight from the motor is: " << object.new_degrees_motor << "°" << endl <<
		"The color temperature of the headlights from the motor is: " << object.new_color_temperature_motor << " K" << endl <<
		"The cylinder volume of the motor is: " << object.new_cylinder_volume_motor << " cm^2" << endl <<
		"The relative brake percentage is: " << object.new_brakes_motor << "%" << endl <<
		"The profile thickness of the most critical tire from the motor is: " << object.new_critical_tire_motor << " mm" << endl;
	return os;
}
