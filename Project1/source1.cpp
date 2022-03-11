#include <iostream>

int main() {
	int A, B, C;
	std::cin >> A >> B >> C;
	B += C;
	A += (B / 60);
	B %= 60;
	A %= 24;
	std::cout << A << " " << B;
}