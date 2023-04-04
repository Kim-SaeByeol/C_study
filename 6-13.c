#include <stdio.h>
	void main() {
		int result;
		for(int i = 2; i<10; i++) {
			for(int j = 1; j <10; j++){
			result = i*j;
				printf("%d X %d = %d \n", i,j,result);
			}
			printf("\n");
		}
	}
