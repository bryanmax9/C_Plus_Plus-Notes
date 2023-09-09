#include <iostream>
//we need to import this library in order to get random numbers
#include <ctime>


int main(){

	//get random number
	srand(time(NULL));

	int randomNum =  rand();

	std::cout << "The random number genrated is: "<< randomNum << std::endl;

	int dice = (rand() % 6) + 1; //six sided dice by taking the remainder of the random number over 6
	

	std::cout << "you rolled: "<< dice << std::endl;

	return 0;
}
