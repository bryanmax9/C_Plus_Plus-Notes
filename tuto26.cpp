#include <iostream>

struct Car {
	std::string model;
	int year;
	std::string color;
}

void printCar(Car car);

int main(){

	//pass a struct to a function
	Car car1;
	car1.model = "Lamborguini";
	car1.year = 2020;
	car1.color = "Black";

	printCar(car1);


	return 0;
}

void printCar(Car car){

	std::cout << car.model << '\n';
	std::cout << car.year << '\n';
	std::cout << car.color << '\n';

}
