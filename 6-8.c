#include <stdio.h>
	void main() {
		int i, hap = 0;
		for(i = 500; i<=1000; i++) {
			if(i%2 !=0){
				hap += i;
			}
		}
		printf("500에서 1000까지의 홀수의 합 : %d \n", hap);
	}

