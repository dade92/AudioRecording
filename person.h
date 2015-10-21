#include<string>
#ifndef PERSON_H
#define PERSON_H

class Person {

	public:
		Person(std::string name);
		std::string talk();
	private:
		std::string name;
		std::string message;
};

#endif
