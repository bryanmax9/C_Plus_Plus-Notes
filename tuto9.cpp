#include <iostream>

int main(){

	//ternaryb operator
	int grade = 50;
	bool passed = false;

	grade >= 60 ? passed=true : passed =false;
	passed ? std::cout << "you passed the course" << '\n' : std::cout << "You didn't pass the course" << '\n';

	return 0;
}
