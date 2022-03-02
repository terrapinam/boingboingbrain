#include <iostream>
#include <stdio.h>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	//윤년은 연도가 '4의 배수이면서, 100의 배수가 아닐 때' 또는 '400의 배수일 때'이다
	int year;
	bool result;
	cin >> year;
	if (year%400 == 0) {
		result = true;
	}	else
	{
		if (year % 100 == 0) {
			result = false;
		}
		else if (year % 4 == 0) {
			result = true;
		}
		else
		{
			result = false;
		}
	}
	cout << result;
	return 0;
}