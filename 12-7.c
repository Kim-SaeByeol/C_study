#include <stdio.h>
#include<malloc.h>
#include<string.h>

	void main() {
		char *p[3];
		char imsi[100];
		int size;

		for(int i = 0; i < 3; i++){
			printf("%d ��° ���ڿ� : ", i+1);
			gets(imsi);

			size = strlen(imsi);
			p[i] = (char*) malloc( (sizeof(char) * size) ) +1;

			strcpy(p[i], imsi);
		}

		printf("\n -- �Է°� �ݴ�� ���(������) --\n");
		for(int i = 2; i >= 0; i--){
			printf("%d %s\n", i+1, p[i]);
		}

		for(int i = 0; i < 3; i++)
			free(p[i]);
	}

