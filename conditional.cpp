#include<iostream>
int main() {
	/*int num;
	std::cout << "Enter the number between 0-100" << std::endl;
	std::cin >> num;
	std::cout << std::endl;
	bool check = num == 100;
	if (check) {
		std::cout << " true " << std::endl;
	}
return 0;
} */
	int number;
	std::cout << "enter the number" << std::endl;
	std::cin >> number;
	if (number < 100) {
		std::cout << "number is lesser than 100" << std::endl;
	}
	else {

		if (number > 100) {
			std::cout << "number is greater than 100" << std::endl;

		}
	}
	return 0;
}
