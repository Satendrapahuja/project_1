#include<iostream>
float* flt() {
	float f{ 10.52f };
	return &f;
}
int main() {
	auto a = 10;
	auto d = 20.5;
	auto r = 'M';
	decltype(flt()) f;
	std::cout << "a is :- "<<a <<std::endl;
	std::cout << "Size of a is :-  "<< sizeof(a) <<std::endl;
	std::cout << "d is :- " << d << std::endl;
	std::cout << "Size of d is :-  " << sizeof(d) << std::endl;
	std::cout << "r is :- " << r << std::endl;
	std::cout << "Size of r is :-  " << sizeof(r) << std::endl;
	std::cout << "f is :- " << typeid(f)<< std::endl;
	std::cout << "Size of flt is :-  " << sizeof(f) << std::endl;
	return 0;
}