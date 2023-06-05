#include <stdio.h>
	void main() {
		int tmp, *p1, *p2;
		int a, b;
		printf("a 값 입력 : ");
		scanf("%d", &a);

		printf("b의 값 입력 : ");
		scanf("%d", &b);

		p1 = &a;
		p2 = &b;

		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		
		printf("바뀐 값 a는 %d, b는 %d\n", *p1, *p2);
	}
