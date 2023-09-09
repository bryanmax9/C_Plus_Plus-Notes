#include <iostream>
#include <vector>


typedef std::string text_t;
typedef int number_t;
using bool_t = bool;


int main(){

	text_t firstName = "Pablo"; 
	number_t age = 21;


	std::cout << firstName << std::endl;
	std::cout << "and I am "<< age <<" years old" << std::endl;


	return 0;
}
