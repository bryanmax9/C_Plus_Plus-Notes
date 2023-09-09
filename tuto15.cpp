#include <iostream>

void happyBirthday(std::string name){
	std::cout << "Happy birthday to you!" << std::endl;
	std::cout << "Happy birthday to you!" << std::endl;
	std::cout << "Happy Birthday dear " << name << std::endl;
	std::cout << "Happy birthday to you!" << std::endl;


}

int main(){
	std::string name;
	std::cout << "What is your name?" << '\n';
	std::cin >> name;
	happyBirthday(name);

	return 0;
}
