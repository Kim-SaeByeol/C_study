#include <stdio.h>
	void main() {
		int a, b, temp;
		int *p1 = &a;
		int *p2 = &b;

		printf("a 값 입력 : ");
		scanf("%d", &a);

		printf("b 값 입력 : ");
		scanf("%d", &b);

		temp = *p1;
		*p1 = *p2;
		*p2 = temp;

		printf("바뀐 a의 값 : %d, 바뀐 b의 값 : %d", a, b);
	}
