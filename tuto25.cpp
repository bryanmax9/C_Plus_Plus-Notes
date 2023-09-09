#include <iostream>

struct student{
	std::string name;
	double gpa;
	bool enrolled;
};

int main(){

	// struct, stoes many different data types (string, int, double, bool, etc.)
	
	student student1;
	student1.name = "George";
	student1.gpa = 3.4;
	student1.enrolled = true;



	std::cout << "student:" << std::endl;
	std::cout << "name = " << student1.name << '\n';
	std::cout << "gpa = " << student1.gpa << '\n';
	std::cout << "enrolled = " << student1.enrolled << '\n';

	return 0;

}
