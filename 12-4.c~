#include <stdio.h>
#include <stdlib.h>
	void main() {
		int *p, *s;
		
		printf("malloc() 함수 사용\n");
		p = (int*) malloc(sizeof(int) * 3);

		for(int i = 0; i < 3; i++){
			printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);

		}
		free(p);

		
		printf("calloc() 함수 사용\n");
		s = (int*) calloc(sizeof(int), 3);

		for(int i = 0; i < 3; i++){
			printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);

		}
		free(s);
	}
