#include <iostream>

int main(){

	//for each loop
	
	std::string estudiantes[] = {"marcelo","brandon", "isaias", "peter"};

	for(std::string student : estudiantes){
		std::cout << student << '\n';

	}

	return 0;
}
