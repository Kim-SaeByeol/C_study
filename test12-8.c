#include <stdio.h>
#include <malloc.h>
	void main() {
		printf("�Է��� ������ ? :");
		int num;
		scanf("%d", &num);

		int *p = (int *) malloc ((sizeof(int)) * num);

		int hap;
		for(int i = 0; i < num; i++){
			printf("%d��° ���� : ", i+1);
			scanf("%d", (p+i));
		       if(*(p+i) %2 == 0)
		       		hap += *(p+i);
		}

		printf("�Է��� ¦�� �� ==> %d", hap);
		free(p);
	}		
