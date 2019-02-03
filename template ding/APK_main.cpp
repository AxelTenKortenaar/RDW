//Axel Ten Kortenaar 449179

#include"std_file.h"
#include "Truck.h"
#include "Car.h"
#include "Motor.h"
#include "Judge.h"
#include "Person.h"
#include "Owner.h"
#include "Vehicle.h"

// moet nog catch error thingy & checken of die if functies buiten de main kunnen
int main()
{
	/*this try catch function is used the get the user error out of it.
	With throw it will send to catch and it will say what the problem is */
	try {
		//initializing all the variables
		int registration_number;
		string first_name;
		string last_name;
		string other_information;
		int APK_expiration_month_old;
		int APK_expiration_year_old;
		string VIN;
		int choice_vehicle;
		string examination_result;
		string advice_optional;
		string license_plate_information;
		int month_now;
		int year_now;
		// end of initializing

		/*user fills in the month and the year and it throws if the month is more than 12 because there are only 12 months
		it gives an error if the year is smaller then 2019 cause we can't go back in time.	*/
		cout << "Fill in the month from today in: ";
		cin >> month_now;
		if (month_now > 12) { throw 1; }
		cout << "Fill in the year from today in: ";
		cin >> year_now;
		if (year_now < 2019) { throw 2; }
		cout << endl;

		cout << "Fill in the first name of the owner: ";
		cin >> first_name;
		cout << "Fill in the last name of the owner: ";
		cin >> last_name;
		cout << "Fill in other information from the vehicle owner: ";
		cin >> other_information;
		cout << endl;

		/*user fills in the month and the year and it throws if the month is more than 12 because there are only 12 months
		it gives also an error if the date is before 1981 cause APK didn't exist before that
		and also an error if the expiration date greater is then the year is today cause that ain't possible. */
		cout << "Fill in the 'old' expiration month: ";
		cin >> APK_expiration_month_old;
		if (APK_expiration_month_old > 12) { throw 1; }
		cout << "Fill in the 'old' expiration year: ";
		cin >> APK_expiration_year_old;
		if (APK_expiration_year_old < 1981 || APK_expiration_year_old > year_now ) { throw 3; }
		cout << "Fill in the vehicle indentification number (VIN): ";
		cin >> VIN;
		cout << endl;

		/* The user have to choose between car, truck and motor this happens with an interger 1, 2 & 3. 
		it will throw an error if the value that the user puts in is greater than 3 cause it ain't an option. */
		cout << "Is the vehicle a car press '1' then 'enter' \nis the vehicle a truck press '2' then 'enter' \nis the vehicle a motor press '3' then 'enter': ";
		cin >> choice_vehicle;
		if (choice_vehicle > 3) { throw 4; }
		cout << endl;


		//This is a function if the user fills in that the APK is for the car
		if (choice_vehicle == 1)
		{
			int brightness_car;
			int degrees_car;
			int color_temperature_car;
			int cylinder_volume_car;
			int brakes_car;
			double critical_tire_car;

			/* User puts in all the car data. if user fills in degrees car more than 180 then it will throw an error.
			It will also throw an error if the relative brake percentage is more than 100 cause it isn't possible to have more then 100%.*/
			cout << "Fill in the brightness of the car's  headlight, then press 'enter': ";
			cin >> brightness_car;
			cout << "Fill in the degrees of the car's headlight, then press 'enter': ";
			cin >> degrees_car;
			if (degrees_car > 180) { throw 5; }
			cout << "Fill in the color temperature of the car's headlight, then press 'enter': ";
			cin >> color_temperature_car;
			cout << "Fill in the cylinder volume of the car, then press 'enter': ";
			cin >> cylinder_volume_car;
			cout << "Fill in the thickness of the most critical tire of the car, then press 'enter': ";
			cin >> critical_tire_car;
			cout << "Fill in the relative brake percentage of the car, then press 'enter': ";
			cin >> brakes_car;
			if (brakes_car > 100) { throw 6; }
			cout << endl;

			/* Function for if the critical tire from the car is between 3.0 & 1.6 then it will put on the advice to the judge report */
			if (critical_tire_car < 3.0 && critical_tire_car >= 1.6)
			{
				advice_optional = "Advice change the tires because profile thickness is less then 3.0 mm";
			}

			/* Function for critical tire, if the tire is lower then 1.6 it will send data to the judge report that the tire needs to change. */
			if (critical_tire_car < 1.6)
			{
				examination_result = "The tires aren't good enough to go on the road, because it is less then 1.6 mm";
			}

			// Using class Vehicle & Car to set en print out the data the user filled in.
			Car Car_1;
			Car_1.set_brightness_car(brightness_car);
			Car_1.set_degrees_car(degrees_car);
			Car_1.set_color_temperatur_car(color_temperature_car);
			Car_1.set_cylinder_volume_car(cylinder_volume_car);
			Car_1.set_critical_tire_car(critical_tire_car);
			Car_1.set_brakes_car(brakes_car);
			Car_1.set_APK_expiration_month_old(APK_expiration_month_old);
			Car_1.set_APK_expiration_year_old(APK_expiration_year_old);
			Car_1.set_VIN(VIN);

			cout << Car_1;
		}
		//This is a function if the user fills in that the APK is for the truck
		if (choice_vehicle == 2)
		{
			int brightness_truck;
			int degrees_truck;
			int color_temperature_truck;
			int cylinder_volume_truck;
			int brakes_truck;
			double critical_tire_truck;

			/* User puts in all the car data. if user fills in degrees car more than 180 then it will throw an error.
			It will also throw an error if the relative brake percentage is more than 100 cause it isn't possible to have more then 100%.*/
			cout << "Fill in the brightness of the truck's headlight, then press 'enter': ";
			cin >> brightness_truck;;
			cout << "Fill in the degrees of the truck's headlight, then press 'enter': ";
			cin >> degrees_truck;
			if (degrees_truck > 180) { throw 5; }
			cout << "Fill in the color temperature of the truck's headlight, then press 'enter': ";
			cin >> color_temperature_truck;
			cout << "Fill in the cylinder volume of the truck, then press 'enter': ";
			cin >> cylinder_volume_truck;
			cout << "Fill in the thickness of the most critical tire of the truck, then press 'enter': ";
			cin >> critical_tire_truck;
			cout << "Fill in the relative bake percentage of the truck, then press 'enter': ";
			cin >> brakes_truck;
			if (brakes_truck > 100) { throw 6; }
			cout << endl;

			/* Function if the user fills in that the color temperature from the truck is less then 3600 then it will send it to the judge report. 
			 saying that the color is to cold. */
			if (color_temperature_truck < 3600)
			{
				examination_result = "Headlights aren't warm enough the color temperature needs to be between 3600 and 5500 K";
			}

			/* Function if the user fills in that the color temperature from the truck higher is than 5500 K.
			it will send it to the judge rapport saying that the headlights are to warm. */
			if (color_temperature_truck > 5500)
			{
				examination_result = "Headlights are to warm the color temperature needs te be between 3600 and 5500 K";
			}

			/* Function if the user fills in that the brightness of the headlights smaller then 1500 it will send it to the judge report, 
			with advice that the lights aren't bright enough. */
			if (brightness_truck < 1500)
			{
				advice_optional = "Advice: The headlights aren't bright enough recomended to change the headlights";
			}

			// Using class Vehicle & Truck to set en print out the data the user filled in.
			Truck Truck_1;
			Truck_1.set_brightness_truck(brightness_truck);
			Truck_1.set_degrees_truck(degrees_truck);
			Truck_1.set_color_temperatur_truck(color_temperature_truck);
			Truck_1.set_cylinder_volume_truck(cylinder_volume_truck);
			Truck_1.set_critical_tire_truck(critical_tire_truck);
			Truck_1.set_brakes_truck(brakes_truck);
			Truck_1.set_APK_expiration_month_old(APK_expiration_month_old);
			Truck_1.set_APK_expiration_year_old(APK_expiration_year_old);
			Truck_1.set_VIN(VIN);

			cout << Truck_1;
		}
		//This is a function if the user fills in that the APK is for the motor
		if (choice_vehicle == 3)
		{
			int brightness_motor;
			int degrees_motor;
			int color_temperature_motor;
			int cylinder_volume_motor;
			int brakes_motor;
			double critical_tire_motor;

			/* User puts in all the car data. if user fills in degrees car more than 180 then it will throw an error.
			It will also throw an error if the relative brake percentage is more than 100 cause it isn't possible to have more then 100%.*/
			cout << "Fill in the brightness of the motor's headlight, then press 'enter': ";
			cin >> brightness_motor;;
			cout << "Fill in the degrees of the motor's headlight, then press 'enter': ";
			cin >> degrees_motor;
			if (degrees_motor > 180) { throw 5; }
			cout << "Fill in the color temperature of the motor's headlight, then press 'enter': ";
			cin >> color_temperature_motor;
			cout << "Fill in the cylinder volume of the motor, then press 'enter': ";
			cin >> cylinder_volume_motor;
			cout << "Fill in the relative brake percentage of the motor, then press 'enter': ";
			cin >> brakes_motor;
			if (brakes_motor > 100) { throw 6; }
			cout << "Fill in the thickness of the most critical tire of the motor, then press 'enter': ";
			cin >> critical_tire_motor;
			cout << endl;

			/* Function that if the user fills in the cylinder volume bigger is then 1000 and also that the relative brake percentage is smaller than 52.
			if those two variables where put in it will send advice en the result to the judge report. */
			if (cylinder_volume_motor > 1000 && brakes_motor < 52)
			{
				advice_optional = "get a better relative brake percentage";
				examination_result = "The relative brake percentage is to low compared with the cylinder volume, it has to be above 52%";
			}

			// Using class Vehicle & Motor to set en print out the data the user filled in.
			Motor Motor_1;
			Motor_1.set_brightness_motor(brightness_motor);
			Motor_1.set_degrees_motor(degrees_motor);
			Motor_1.set_color_temperatur_motor(color_temperature_motor);
			Motor_1.set_cylinder_volume_motor(cylinder_volume_motor);
			Motor_1.set_critical_tire_motor(critical_tire_motor);
			Motor_1.set_brakes_motor(brakes_motor);
			Motor_1.set_APK_expiration_month_old(APK_expiration_month_old);
			Motor_1.set_APK_expiration_year_old(APK_expiration_year_old);
			Motor_1.set_VIN(VIN);

			cout << Motor_1;
		}

		// Using class Person & Owner to set and print out the data that the user filled in.
		Owner Owner_1;
		Owner_1.set_first_name(first_name);
		Owner_1.set_last_name(last_name);
		Owner_1.set_other_information(other_information);


		// User fills in the data
		cout << endl << "Fill in your registration number: ";
		cin >> registration_number;
		cout << "Fill in first name: ";
		cin >> first_name;
		cout << "Fill in last name: ";
		cin >> last_name;
		cout << "Fill in the license plate information of the vehicle (use _ as space): ";
		cin >> license_plate_information;
		cout << endl << endl;


		// Using class Person & Owner to set and print out the data that the user filled in.
		Judge Judge_1;
		Judge_1.set_registration_number(registration_number);
		Judge_1.set_first_name(first_name);
		Judge_1.set_last_name(last_name);
		Judge_1.set_examination_result(examination_result);
		Judge_1.set_advice_optional(advice_optional);
		Judge_1.set_license_plate_information(license_plate_information);
		Judge_1.set_month_now(month_now);
		Judge_1.set_year_now(year_now);
		Judge_1.set_expiration_year_new(year_now);

		cout << Owner_1;
		cout << endl;
		cout << Judge_1;
	}

	/* Error handeling, uses all the throws. It will put out an interger and with that interger there is a function that will send on the display
	of the user what happend wrong. Afterwards it will end the program and the user has to start it back up again (I don't really know how to fix this). */ 
	catch (int error_code)
	{
		cerr << "Error code is: " << error_code << endl;
		if (error_code == 1) { cout << "One year doesn't have more then 12 months. \n"; }
		if (error_code == 2) { cout << "You aren't in the future, please fill in the year of today. \n"; }
		if (error_code == 3) { cout << "The APK didn't exist before 1981 so it isn't possible what you filled in. \n"; }
		if (error_code == 4) { cout << "You have the choose between car, truck & motor, there isn't another possibility. \n"; }
		if (error_code == 5) { cout << "You can't have the lights more than 180 degrees because that is physicaly inpossible. \n"; }
		if (error_code == 6) { cout << "100% is the max percentage you can have so above that isn't possible. \n"; }
	}

	
	keep_window_open();
	return (0);
}
