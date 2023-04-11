#include <stdio.h>
	void main() {
		int i = 1;
		int sum = 0;
		while (i <= 10) {
			sum += i;
			i++;
		}
		printf("1에서 10 까지의 합 : %d", sum);
	}
