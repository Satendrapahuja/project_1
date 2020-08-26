#include<iostream>
int main() {
	auto a = 10;
	auto d = 20.5;
	auto r = 'M';
	
	std::cout << "a is :- "<<a <<std::endl;
	std::cout << "Size of a is :-  "<< sizeof(a) <<std::endl;

	std::cout << "d is :- " << d << std::endl;
	std::cout << "Size of d is :-  " << sizeof(d) << std::endl;
	
	std::cout << "r is :- " << r << std::endl;
	std::cout << "Size of r is :-  " << sizeof(r) << std::endl;
	
	return 0;
}