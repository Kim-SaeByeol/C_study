#include <stdio.h>
	void main() {
		int a, b, result;
		for( ; ; ) {
		printf("���� �� �� �Է� (���߷��� Ctrl + C) :  ");
		scanf("%d %d", &a, &b);
		result = a + b;
		printf("%d + %d = %d\n", a, b, result);
		}
	}
