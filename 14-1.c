#include <stdio.h>
	void main(int argc, char *argv[]) {

		printf("argc 매개변수 ==> %d \n", argc);

		for(int i = 0; i < argc; i++){
			printf("argv[%d] 매개변수 ==> %s \n", i, argv[i]);
		}
	}
