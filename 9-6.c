#include <stdio.h>
	void main() {
		char ch = 'A';
		char *p = &ch;

		printf("ch가 가지고 있는 값 ch ==> %c \n", ch);
		printf("ch의 주소 ==> %d\n", &ch);
		printf("p가 가지고 있는 값 ==> %d\n", p);
		printf("p가 가리키는 주소의 실제 값 ==> %c\n", *p);
	}
