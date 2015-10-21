#include<iostream>
#include"person.h"

int main() {

	Person joe("Joe");
	Person bob("Bob");
	std::cout<<"hello guys!"<<std::endl;

	std::cout<<joe.talk()<<std::endl;
	std::cout<<bob.talk()<<std::endl;

	std::cout<<"now joe walks:"<<std::endl;
	std::cout<<joe.walk()<<std::endl;
	std::cout<<joe.walk()<<std::endl;


	return 0;
}
