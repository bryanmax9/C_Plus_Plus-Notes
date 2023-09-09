#include <iostream>

int main(){
	
	double students = (int) 20.8;

	students += 1;

	int x = 100;	

	//type conversion for score
	int correct = 8;
	int questions = 10;
	double score = correct/(double)questions * 100;	

	std::cout << "there is " << students << " students in the class" << '\n';
	std::cout << "We are going to conver this number " << x << " into a character, in this case : " << (char)x << '\n';
	std::cout << "You got an score of " << correct << ", so you got " << score << "%" << " out of 100%" << '\n';

	return 0;
}
