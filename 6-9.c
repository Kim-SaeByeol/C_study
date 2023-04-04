#include <stdio.h>
	void main() {
		int a, i, hap = 0;
		printf("값 입력 : ");
		scanf("%d", &a);
		for (i = 0; i<=a; i++) {
		hap += i;
		}
		printf("1에서 %d까지의 합 : %d",a,hap);
	}	

