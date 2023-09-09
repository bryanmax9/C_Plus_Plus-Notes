#include <iostream>
//import this library in order to my function templates that will accept any data type
template <typename T, typename U>

auto max(T x, U y){
	return (x>y)? x : y;
}

int main(){

	std::cout << max(2,1.5) << '\n';

	return 0;

}
