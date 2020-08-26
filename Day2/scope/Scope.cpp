#include<iostream>
int a{ 50 };
int main() {
	int a{ 47 }; {
		int s = a;
		int a{ 89 };
		std::cout <<s << std::endl;
		std::cout << a << std::endl;
	}
	std::cout << a << std::endl;
	std::cout << ::a<< std::endl;
	return 0;
}