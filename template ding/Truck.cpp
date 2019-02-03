#include "std_file.h"
#include "Truck.h"
#include "Vehicle.h"

// constructor
Truck::Truck()
{
	new_brightness_truck = 0;
	new_degrees_truck = 0;
	new_color_temperature_truck = 0;
	new_cylinder_volume_truck = 0;
	new_brakes_truck = 0;
	new_critical_tire_truck = 0.0;
}

//overload constructor
Truck::Truck(int brightness_truck, int degrees_truck, int color_temperature_truck, int cylinder_volume_truck, int brakes_truck, double critical_tire_truck,
	int APK_expiration_month_old, int APK_expiration_year_old, string VIN)
	: Vehicle(APK_expiration_month_old, APK_expiration_year_old, VIN)
{
	// everything after = put in the main
	new_brightness_truck = brightness_truck;
	new_degrees_truck = degrees_truck;
	new_color_temperature_truck = color_temperature_truck;
	new_cylinder_volume_truck = cylinder_volume_truck;
	new_brakes_truck = brakes_truck;
	new_critical_tire_truck = critical_tire_truck;
}

//deconstructor
Truck::~Truck()
{
}

//get functions for returning
int Truck::get_brightness_truck() const
{
	return new_brightness_truck;
}

int Truck::get_degrees_truck() const
{
	return new_degrees_truck;
}

int Truck::get_color_temperature_truck() const
{
	return new_color_temperature_truck;
}

int Truck::get_cylinder_volume_truck() const
{
	return new_cylinder_volume_truck;
}

int Truck::get_brakes_truck() const
{
	return new_brakes_truck;
}

double Truck::get_critical_tire_truck() const
{
	return new_critical_tire_truck;
}
//end of get functions

//sets new data
void Truck::set_brightness_truck(int brightness_truck)
{
	new_brightness_truck = brightness_truck;
}

void Truck::set_degrees_truck(int degrees_truck)
{
	new_degrees_truck = degrees_truck;
}

void Truck::set_color_temperatur_truck(int color_temperatur_truck)
{
	new_color_temperature_truck = color_temperatur_truck;
}

void Truck::set_cylinder_volume_truck(int cylinder_volume_truck)
{
	new_cylinder_volume_truck = cylinder_volume_truck;
}

void Truck::set_brakes_truck(int brakes_truck)
{
	new_brakes_truck = brakes_truck;
}

void Truck::set_critical_tire_truck(double critical_tire_truck)
{
	new_critical_tire_truck = critical_tire_truck;
}
//end of setting new data

//this is a print function that prints all the data on the screen
ostream& operator<<(ostream& os, const Truck& dt)
{
	os << "The 'old' expiration date for the truck is: " << dt.new_APK_expiration_month_old << "/" << dt.new_APK_expiration_year_old << endl <<
		"The vehicle indentification number (VIN) is: " << dt.new_VIN << endl <<
		"The brightness of the headlights from the truck is: " << dt.new_brightness_truck << " lm" << endl <<
		"The degrees of the headlight from the truck is: " << dt.new_degrees_truck << "°" << endl <<
		"The color temperature of the headlights from the truck is: " << dt.new_color_temperature_truck << " K" << endl <<
		"The cylinder volume of the truck is: " << dt.new_cylinder_volume_truck << " cm^2" << endl <<
		"The relative brake percentage is: " <<dt.new_brakes_truck << "%" << endl <<
		"The profile thickness of the most critical tire from the truck is: " << dt.new_critical_tire_truck << " mm" << endl;
	return os;
}
