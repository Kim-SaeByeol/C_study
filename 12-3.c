#include <stdio.h>
#include <malloc.h>

	void main() {
		int count;
		printf("�Է��� ������ : ");
	        scanf("%d",&count);
		int hap = 0;
		int *p;
		p = (int*) malloc(sizeof(int) * count);

		for(int i = 0; i < count; i++){
			printf(" %2d��° ���� : ", i+1);
	       		scanf("%d", &p[i]);
			hap = hap + p[i];
		}
		printf("�Է� ������ �� ==> %2d", hap);
		free(p);
	}