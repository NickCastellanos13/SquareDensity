// December 19, 2023. 1:30 a.m.

#include <iostream>

int squareSum(int n) {
	int i = 1;
	int result = 0;

	while (i <= n) {
		result += i * i;
		i++;
	}

	return result;
}

int main(void) {
	int subDivisions = 0;
	std::cout << "Type the sub-division n of the square: ";
	std::cin >> subDivisions;
	int totalSquares = squareSum(subDivisions);
	std::cout << "Your square includes " << totalSquares << " squares, including itself." << std::endl;
	std::cout << "Press any key to exit...";
	std::cin >> subDivisions;

	return 0;
}

// December 19, 2023. 1:36 a.m.
