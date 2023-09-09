#include <iostream>

int main(){

	//Math related functions;
	double x = 3;
	double y = 4;
	double maxNum;
	double min;
	double power;
	double squareRoot;
	double absolute;
	double redondeado;
	double roundUP;
	double roundDown;

	maxNum = std::max(x,y);
	min = std::min(x,y);
	power = pow(x,y);
	squareRoot = sqrt(y);
	absolute = abs(-5);
	redondeado = round(3.3);
	roundUP = ceil(y);
	roundDown = floor(y);



	std::cout << "I like Hamburguers" << std::endl;
	std::cout << "is really good" << std::endl;

	return 0;
}
