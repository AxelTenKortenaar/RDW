#pragma once
#pragma once
#include "std_file.h"
#include "Vehicle.h"
//Child class from Vehicle class

#ifndef Truck_H
#define Truck_H

class Truck : public Vehicle
{
private:
	//member variables
	int new_brightness_truck;
	int new_degrees_truck;
	int new_color_temperature_truck;
	int new_cylinder_volume_truck;
	int new_brakes_truck;
	double new_critical_tire_truck;

public:
	//default constructor
	Truck();

	//overload constructor
	Truck(int, int, int, int, int, double, int, int, string);

	//destructor
	~Truck();

	//accessor
	int get_brightness_truck() const;
	int get_degrees_truck() const;
	int get_color_temperature_truck() const;
	int get_cylinder_volume_truck() const;
	int get_brakes_truck() const;
	double get_critical_tire_truck() const;

	//mutator functions
	void set_brightness_truck(int);
	void set_degrees_truck(int);
	void set_color_temperatur_truck(int);
	void set_cylinder_volume_truck(int);
	void set_brakes_truck(int);
	void set_critical_tire_truck(double);

	//print function
	friend ostream& operator<<(ostream&, const Truck& dt);
};


#endif