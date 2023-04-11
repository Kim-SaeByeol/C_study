#include <stdio.h>
	void main() {
		int sum = 0;
		for ( int i = 1; i <= 100; i++ ) {
			sum += i;
			if(sum > 1000) {
				printf("1~100의 합에서 최초로 1000이 넘는 위치는? : %d", i);
				break;
			}
		}
	}
		
