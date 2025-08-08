#pragma once

#include <string>
class Car
{
private:
	std::string model;
	int year;
	bool isAvailable;

public:
	Car(const std::string& model, int year);
	~Car();

	void displayInfo() const;
	bool getAvailability();
	void rentCar();
	void returnCar();
};

