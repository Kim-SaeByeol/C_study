#include <stdio.h>
	void main() {
		int sum = 0;
		for ( int i = 1; i <= 100; i++ ) {
			sum += i;
			if(sum > 1000) {
				printf("1~100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ��? : %d", i);
				break;
			}
		}
	}
		
