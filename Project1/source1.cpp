#include <iostream>

int main() {
	int dice[6] = { 0 };
	int size;
	std::cout << "Enter the number of dice to roll : ";
	std::cin >> size;
	int* roll = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "roll[" << i << "] Enter a value (1~6) : ";
		std::cin >> roll[i];
	}
	for (int i = 1; i < 7; i++) {
		for (int j = 0; j < 3; j++)
		{
			if (roll[j] == i)
				dice[i-1]++;
		}
	}
	int result;
	for (int i = 0; i < 6; i++)
	{
		if (dice[i] == 3) {
			result = 10000 + (i+1) * 1000;;
			std::cout << result;
			return 0;
		}
		if (dice[i] == 2) {
			result = 1000+(i+1)*100;
			std::cout << result;
			return 0;
		}
	}
	for (int i = 5; i > 0; i--)
	{
		if (dice[i] == 1) {
			result = (i+1) * 100;
			std::cout << result;
			return 0;
		}
	}
}