#include<iostream>
int main() {
	int num;
	std::cout << "Enter the number to check" << std::endl;
	std::cin << num << std::endl;
	bool check = num == 56;
	if (check) {
		std::cout << " True " << std::endl;

	}
	return 0;
}
