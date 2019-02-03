#pragma once
#pragma once
#include "std_file.h"
#include "Vehicle.h"
// Child class from Vehicle class

#ifndef Car_H
#define Car_H

class Car: public Vehicle
{
private:
	//member variables
	int new_brightness_car;
	int new_degrees_car;
	int new_color_temperature_car;
	int new_cylinder_volume_car;
	int new_brakes_car;
	double new_critical_tire_car;

public:
	//default constructor
	Car();

	//overload constructor
	Car(int, int, int, int, int, double, int, int, string);

	//destructor
	~Car();

	//accessor
	int get_brightness_car() const;
	int get_degrees_car() const;
	int get_color_temperature_car() const;
	int get_cylinder_volume_car() const;
	int get_brakes_car() const;
	double get_critical_tire_car() const;

	//mutator functions
	void set_brightness_car(int);
	void set_degrees_car(int);
	void set_color_temperatur_car(int);
	void set_cylinder_volume_car(int);
	void set_brakes_car(int);
	void set_critical_tire_car(double);

	//Print function
	friend ostream& operator<<(ostream&, const Car& thing);
};


#endif