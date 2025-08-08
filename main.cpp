#include "Car.h"
#include "RentalSystem.h"

#include <iostream>


int main() {
	Car car1("Toyota Corolla", 2020);
	Car car2("Honda Civic", 2019);
	Car car3("Ford Mustang", 2021);

	RentalSystem rentalSystem(car1, car2, car3);

	int choice;
	do {
		std::cout << "--- Car Rental System ---\n";
		std::cout << "1. View all cars.\n";
		std::cout << "2. Rent a car by index.\n";
		std::cout << "3. Return a car by index.\n";
		std::cout << "4. Exit the program.\n";

		std::cout << "Select an option: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			rentalSystem.displayCars();
			break;
		case 2:
			do {
				int index = 0;
				std::cout << "Enter an index: ";
				std::cin >> index;
				if (index >= 0) {
					rentalSystem.rentCarByIndex(index);
					break;
				}
				else {
					std::cout << "Enter an index greater than or equal to zero. Try again.\n";
				}
			} while (true);
			break;
		case 3:
			do {
				int index = 0;
				std::cout << "Enter an index: ";
				std::cin >> index;
				if (index >= 0) {
					rentalSystem.returnCarByIndex(index);
					break;
				}
				else {
					std::cout << "Enter an index greater than or equal to zero. Try again.\n";
				}
			} while (true);
			break;
		case 4:
			std::cout << "Exiting program...\n";
			return 0;
		}
		
	} while (choice != 4);
}