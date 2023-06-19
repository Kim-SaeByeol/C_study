#include <stdio.h>
#include <malloc.h>
	void main() {
		printf("입력할 갯수는 ? :");
		int num;
		scanf("%d", &num);

		int *p = (int *) malloc ((sizeof(int)) * num);

		int hap;
		for(int i = 0; i < num; i++){
			printf("%d번째 숫자 : ", i+1);
			scanf("%d", (p+i));
		       if(*(p+i) %2 == 0)
		       		hap += *(p+i);
		}

		printf("입력한 짝수 합 ==> %d", hap);
		free(p);
	}		
