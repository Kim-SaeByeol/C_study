#include <stdio.h>
	void main() {
		int val;
		int hap = 0;
		for(int i = 0; i < 4; i++){
			printf("%d번째 숫자를 입력하세요 : ", i+1);
			scanf("%d", &val);
			hap += val;
		}

		printf("합계 ==> %d", hap);
	}

