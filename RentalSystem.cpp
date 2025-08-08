#include "RentalSystem.h"

#include <iostream>

RentalSystem::RentalSystem(Car& car1, Car& car2, Car& car3)
{
	cars.push_back(car1);
	cars.push_back(car2);
	cars.push_back(car3);
}

void RentalSystem::displayCars() const
{
	for (size_t i = 0; i < cars.size(); ++i) {
		std::cout << "Index " << i << ":\n";
		cars[i].displayInfo();
		std::cout << "\n";
	}
}

void RentalSystem::rentCarByIndex(int index)
{
	if (index >= 0 && index < static_cast<int>(cars.size())) {
		cars[index].rentCar();
	}
	else {
		std::cout << "Invalid car index.\n";
	}
}

void RentalSystem::returnCarByIndex(int index)
{
	if (index >= 0 && index < static_cast<int>(cars.size())) {
		cars[index].returnCar();
	}
	else {
		std::cout << "Invalid car index.\n";
	}
}
