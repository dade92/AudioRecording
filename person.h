#include<string>
#ifndef PERSON_H
#define PERSON_H

class Person {

	public:
		Person(std::string name);
		std::string talk();
		int walk();
	private:
		std::string name;
		std::string message;
		int steps;
};

#endif
