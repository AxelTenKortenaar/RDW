#pragma once
#pragma once
#include "std_file.h"
#include "Vehicle.h"
//Child class from Vehicle class

#ifndef Motor_H
#define Motor_H

class Motor : public Vehicle
{
private:
	//member variables
	int new_brightness_motor;
	int new_degrees_motor;
	int new_color_temperature_motor;
	int new_cylinder_volume_motor;
	int new_brakes_motor;
	double new_critical_tire_motor;


public:
	//default constructor
	Motor();

	//overload constructor
	Motor(int, int, int, int, int, double, int, int, string);

	//destructor
	~Motor();

	//accessor
	int get_brightness_motor() const;
	int get_degrees_motor() const;
	int get_color_temperature_motor() const;
	int get_cylinder_volume_motor() const;
	int get_brakes_motor() const;
	double get_critical_tire_motor() const;

	//mutator functions
	void set_brightness_motor(int);
	void set_degrees_motor(int);
	void set_color_temperatur_motor(int);
	void set_cylinder_volume_motor(int);
	void set_brakes_motor(int);
	void set_critical_tire_motor(double);

	//Print function
	friend ostream& operator<<(ostream&, const Motor& object);
};


#endif