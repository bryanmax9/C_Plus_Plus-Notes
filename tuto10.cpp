#include <iostream>

int main(){

	//logical operators
	int temp;

	std::cout << "Enter the temperature: ";
	std::cin >> temp;

	if(temp > 0 && temp < 30){
		std::cout << "The temperature is good" << '\n';
	}
	else if( temp > 30 || temp < 45){
		std::cout << "The temperature is bad"<< '\n';
	}
	else{
		std::cout << "the temperature is horrible" << '\n';
	}




	return 0;
}
