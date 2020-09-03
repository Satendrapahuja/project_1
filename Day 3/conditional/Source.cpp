#include<iostream>

 int main()
{
	int a = 10;
	void* ptr = &a;
	double* ptr1 = (double*) &a;
	std::cout << ptr << std::endl;
	std::cout << *ptr1 << std::endl;
	//std::cout << ptr1 << std::endl;

	return 0;
}
