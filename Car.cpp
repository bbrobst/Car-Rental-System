#include "Car.h"

#include <iostream>

Car::Car(const std::string& model, int year) : model(model), year(year), isAvailable(true)
{
}

Car::~Car()
{
	std::cout << "Car object destroyed: " << model << " (" << year << ")\n";
}

void Car::displayInfo() const
{
	std::cout << "Model: " << model << "\n";
	std::cout << "Year: " << year << "\n";
	std::cout << "Status: " << isAvailable << "\n";
	
}

bool Car::getAvailability()
{
	return isAvailable;
}

void Car::rentCar()
{
	if (isAvailable) {
		isAvailable = false;
		std::cout << "The car was successfully rented out.\n";
	}
	else {
		std::cout << "The car is not available to be rented.\n";
	}
}

void Car::returnCar()
{
	if (!isAvailable) {
		isAvailable = true;
		std::cout << "The car was successfully returned.\n";
	}
	else {
		std::cout << "The car was already returned.\n";
	}
}
