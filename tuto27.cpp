#include <iostream>

//Object oriented Programming
class Human{
	public:
		std::string name;
		std::string occupation;
		int age;
	
	//Methods (functions that perform the class)
	
	void eat(){
		std::cout << "This person is eating \n";

	}
	void drink(){
		std::cout << "This person is drinking \n";
	}

	void sleep(){
		std::cout << "This person is sleeping \n";

	}

};

class Student {
	private:
		int age = 0;
	public:
		std::string name;
		int gpa;

		


	//Constructor
	Student(std::string name, double gpa){
		this->name =  name;
		this->gpa = gpa;
	}

	//getters and setter
	
	int getAge(){
		return age;
	}

	void birthday(){
		std::cout << "Happy Birthday " << name << '\n';
		age += 1;	
	}

	void setAge(int age){
		this->age = age;
	}

};


int main(){
	Human human1;

	human1.name = "Josh";
	human1.occupation = "Scientist";
	human1.age = 70;

	Student student1("Pedro Pascal", 3.4);

	std::cout << human1.name << " is a " << human1.occupation << ", and has " << human1.age <<" years old." << '\n';

	human1.eat();
	human1.drink();
	human1.sleep();

	std::cout << student1.name << '\n';
	student1.birthday();


	return 0;
}
