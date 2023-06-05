#include <stdio.h>
	void main() {
		char ch = 'A';
		char *p = &ch;
		char *q;
	 	*q = 'Z';

		printf("chÀÇ °ª ==> %c\n", *q);
	}		
