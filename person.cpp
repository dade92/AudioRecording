#include<string>
#include"person.h"

Person::Person(std::string n) {

	name=n;
}

std::string Person::talk() {

	return "hello my name is "+name;
}
