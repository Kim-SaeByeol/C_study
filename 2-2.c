#include <stdio.h>
	void main() {
		printf("첫번째 값을 입력하세요 ==> ");
		int a, b;
		int result;
		a = 100;
		b = 50;
		result = a + b ;
		printf("%d + %d = %d\n" , a, b, result);

		result = a - b;
		printf("%d - %d = %d\n" , a, b, result);

		result = a * b;
		printf("%d * %d = %d\n" , a, b, result);

		result = a / b;
		printf("%d / %d = %d\n", a, b, result);

	}
