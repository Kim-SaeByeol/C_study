#include <stdio.h>
	void main() {
		int i, j, result;
		for(i=1, j=1; i<10; i++, j++) {
			result = i * j;
			printf("%d X %d = %d\n",i, j, result);
		}
	}
