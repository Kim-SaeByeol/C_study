#include <stdio.h>
	void main(int argc, char *argv[]) {

		printf("argc �Ű����� ==> %d \n", argc);

		for(int i = 0; i < argc; i++){
			printf("argv[%d] �Ű����� ==> %s \n", i, argv[i]);
		}
	}
