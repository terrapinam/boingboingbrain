#include <iostream>
#include <stdio.h>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	//������ ������ '4�� ����̸鼭, 100�� ����� �ƴ� ��' �Ǵ� '400�� ����� ��'�̴�
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