#include <stdio.h>
#include <stdlib.h>
	void main() {
		int *p;
		int hap = 0;
		int count = 0;
		int data;

		p = (int*) malloc(sizeof(int) * 1);
		printf("1 ��° ���� : ");
		scanf("%d", &p[0]);
		count++;

		for(int i = 2; ; i++) {
			printf("%d ��° ���� : ", i);
			scanf("%d", &data);

			if(data != 0)
				p = (int*) realloc(p, sizeof(int) * i);
			else 
				break;

			p[i-1] = data;
			count++;
		}

		for(int i = 0; i < count; i++) 
			hap = hap + p[i];

		printf("�Է� ���� �� ==> %d\n", hap);
		free(p);
	}
