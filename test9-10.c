#include <stdio.h>
	void main() {
		int a, b, temp;
		int *p1 = &a;
		int *p2 = &b;

		printf("a �� �Է� : ");
		scanf("%d", &a);

		printf("b �� �Է� : ");
		scanf("%d", &b);

		temp = *p1;
		*p1 = *p2;
		*p2 = temp;

		printf("�ٲ� a�� �� : %d, �ٲ� b�� �� : %d", a, b);
	}
