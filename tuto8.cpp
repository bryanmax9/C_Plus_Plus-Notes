#include <iostream>

int main(){

	//using if statement
	int age;

	std::cout << "Enter your age:" << std::endl;
	std::cin >> age;

	if(age >= 18){
		std::cout << "Welcome to the 18+ site!" << '\n';
	}
	else if(age < 0){
		std::cout << "You haven't been born yet!" << '\n';
	}
	else if(age >= 100){
		std::cout << "You are too old for this page!" << '\n'; 
	}
	else{
		std::cout << "You are not old enough!" << '\n';
	}



	return 0;
}
