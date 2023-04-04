#include <stdio.h>
	void main() {
		int i, a, result;
		printf("¸î ´Ü ?  ");
		scanf("%d", &a);
		
		for (i = 1; i <= 9; i++) {
		result = i * a;
			printf("%d X %d = %d\n",a , i, result);
		}
	}
		       	
