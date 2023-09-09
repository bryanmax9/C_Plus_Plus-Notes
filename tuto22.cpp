#include <iostream>

int main(){

	//dynamic memory
	//first making a pointe
	int *pNum = NULL;

	
	// allocate memory in the heap instead of the stack
	pNum = new int;

	*pNum = 21;

	std::cout << "addres: " << pNum << '\n';
	std::cout << "value: " << *pNum << '\n';

	//at the end of the program delte our pointer in order to frre up memory
	//When using the new operator, you should be using the delete operator
	delete pNum;

	char *pGrades =NULL;
	int size;

	std::cout << "How many grades to enter in?: ";
	std::cin >> size;
	
	pGrades = new char[size];

	for(int i = 0; i < size; i++){
		std::cout << "Enter grade #" << i + 1 << ": ";
		std::cin >> pGrades[i];
	}

	for(int i = 0; i < size; i++){
		std::cout << pGrades[i] << " ";
	}

	//Deleting the array
	delete[] pGrades;
	
	return 0;
}
