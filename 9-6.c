#include <stdio.h>
	void main() {
		char ch = 'A';
		char *p = &ch;

		printf("ch�� ������ �ִ� �� ch ==> %c \n", ch);
		printf("ch�� �ּ� ==> %d\n", &ch);
		printf("p�� ������ �ִ� �� ==> %d\n", p);
		printf("p�� ����Ű�� �ּ��� ���� �� ==> %c\n", *p);
	}
