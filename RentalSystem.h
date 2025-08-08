#pragma once

#include "Car.h"

#include <string>
#include <vector>

class RentalSystem
{
private:
	std::vector<Car> cars;

public:
	RentalSystem(Car& car1, Car& car2, Car& car3);

	void displayCars() const;
	void rentCarByIndex(int index);
	void returnCarByIndex(int index);


};

