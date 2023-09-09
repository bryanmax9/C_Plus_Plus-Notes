#include <iostream>

int main(){

	//Arrays
	
	std::string car[] = {"corvette","mustang","camry"};

	for(int i = 0; i < (sizeof(car)/sizeof(car[0])); i++ ){
		std::cout << car[i] << std::endl;
	}


	return 0;
}
