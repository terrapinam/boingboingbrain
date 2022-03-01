#include <iostream>
#include <stdio.h>
//#include <cmath>
//#include <cstring>
//#include <string>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	int num;
	cin >> num;
	if (0 <= num && num <= 100)
		switch (num / 10)
		{
		case 10:
		case 9:
			cout << 'A';
			break;
		case 8:
			cout << 'B';
			break;
		case 7:
			cout << 'C';
			break;
		case 6:
			cout << 'D';
			break;
		default:
			cout << 'F';
			break;
		}
	return 0;
}