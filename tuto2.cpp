#include <iostream>

int main(){

	int x; //declaration
	x = 5; //assignment
	
	int y = 6;

	int age = 21;
	int year = 2023;
	int days = 7;


	//double (number including decimal)
	double price = 10.99;
	double gpa = 2.5;
	double temperature = 25.1;

	//single character
	char grade = 'A';
	char initial = 'B';
	char currency = '$';

	//boolean(true or false)
	bool student = true;
	bool power = true;
	bool forSale = true;

	// string
	std::string name = "Bro";
	std::string day = "Friday";
	std::string food = "pizza";
	std::string address = "123 Fake St.";


	std::cout << "Hello " << name << '\n';
	std::cout << "Today is "<< day << '\n';

	std::cout << price<< currency << '\n';
	std::cout << initial << '\n';
	std::cout << "I am " << age << " years old" << '\n';



	return 0;
}
