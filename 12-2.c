#include <stdio.h>
	void main() {
		int aa[10000];
		int *p;
		int hap = 0;
		int count;

		printf(" 입력할 개수는 : ");
		scanf("%d", &count);

		for(int i = 0; i < count; i++){
			printf("%d 번째 숫자 : ", i+1);
			scanf("%d", &aa[i]);
		}

		p = aa;

		for(int i = 0; i < count; i++){
			hap = hap + *(p+i);
		}

		printf("입력 숫자의 합 ==> %d\n", hap);
	}
