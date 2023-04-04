#include <stdio.h>
	void main() {
		int i,j, result;
	for(i = 2; i<10; i++) {
		for (j = 1; j <10; j++) {
			result = i*j;
			printf("%d X %d = %d\t", i, j, result);
		}
		printf("\n");
	}
	}
