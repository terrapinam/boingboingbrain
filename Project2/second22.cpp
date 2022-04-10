#include <iostream>

int main() {
	int T;
	std::cin >> T;
	int* A = new int[T];
	int* B = new int[T];
	
	for (int i = 0; i < T; i++)
	{
		std::cin >> A[i] >> B[i];
	}

	for (int i = 0; i < T; i++)
	{
		std::cout << A[i] + B[i] << std::endl;
	}
	
	return 0;
}