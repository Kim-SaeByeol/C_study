#include <stdio.h>
	void main() {
		int i, j, result;
		for (i = 2; i<10; i++) {
			printf("#Á¦%d´Ü#   ", i);
		}
		printf("\n");
		printf("\n");
		for(i = 1; i < 10; i++) {
				for( j = 2; j <10; j++) {
					result = i * j;
				printf("%dX %d= %2d  ", j, i, result);
				}
		printf("\n");
		}	
	}
