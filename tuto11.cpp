#include <iostream>

int main(){

	//making a gmail out of a username
	//
	
	std::string name;

	std::cout << "Welcome to Hotmail!" << std::endl;
	std::cout << "What would be your username?" << std::endl;

	std::getline(std::cin,name);

	name.append("@gmail.com");

	std::cout << "your username starts with "<< name.at(0) << ". Your gmail has been assigned as: "<< name << '\n';


	return 0;
}
