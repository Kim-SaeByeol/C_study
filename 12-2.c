#include <stdio.h>
	void main() {
		int aa[10000];
		int *p;
		int hap = 0;
		int count;

		printf(" �Է��� ������ : ");
		scanf("%d", &count);

		for(int i = 0; i < count; i++){
			printf("%d ��° ���� : ", i+1);
			scanf("%d", &aa[i]);
		}

		p = aa;

		for(int i = 0; i < count; i++){
			hap = hap + *(p+i);
		}

		printf("�Է� ������ �� ==> %d\n", hap);
	}