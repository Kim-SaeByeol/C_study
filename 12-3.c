#include <stdio.h>
#include <malloc.h>

	void main() {
		int count;
		printf("입력할 개수는 : ");
	        scanf("%d",&count);
		int hap = 0;
		int *p;
		p = (int*) malloc(sizeof(int) * count);

		for(int i = 0; i < count; i++){
			printf(" %2d번째 숫자 : ", i+1);
	       		scanf("%d", &p[i]);
			hap = hap + p[i];
		}
		printf("입력 숫자의 합 ==> %2d", hap);
		free(p);
	}
