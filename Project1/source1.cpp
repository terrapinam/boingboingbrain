#include <stdio.h>

int main() {
	int a[2] = {};
	scanf_s("%d %d", a, a + 1);
	printf("%d", a[0] + a[1]);
	return 0;
}