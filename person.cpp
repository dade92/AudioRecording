#include<string>
#include"person.h"

Person::Person(std::string n) {

	name=n;
	steps=0;
}

std::string Person::talk() {

	return "hello my name is "+name;
}

int Person::walk() {

	return steps++;
}
