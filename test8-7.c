#include <stdio.h>
	void main() {
		char ss[8] = {"Basic-C"};
		ss[5] = '#';
		for(int i = 0; i < sizeof(ss)/sizeof(char); i++){
			printf("ss[%d] ==> %c\n", i, ss[i]);
		}

		printf("문자열 배열 ss ==> %s", ss);
	}
