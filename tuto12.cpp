#include <iostream>

int main(){

	//while loops
	std::string name;

	while(name.empty()){
		std::cout << "Enter your name: ";
		std::getline(std::cin, name);
	}

	std::cout << "Hello "<< name << '\n';

	//do while loop
	int number;

	do{
		std::cout << "Enter a positive number: ";
		std::cin >> number;

	} while(number < 0);

	std::cout << "Your positive number is : " << number << '\n';	




	return 0;
}
