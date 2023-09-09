#include <iostream>

int main(){

	//Recieving input from user
	std::string name;
	int age;
	std::string major;

	std::cout << "What is your full name?: " << std::endl;
	//allow input with spaces
	std::getline(std::cin >> std::ws, name);

	std::cout << "What is your age?: " << std::endl;
	std::cin >> age;
	
	std::cout << "What major you are?: " << std::endl;
	std::cin >> major;

	std::cout << "Hello " << name << " who is a " << major << " major and has " << age << " years old" << std::endl;

	return 0;
}
