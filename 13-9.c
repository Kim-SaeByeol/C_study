#include <stdio.h>
#include <malloc.h>

	void main() {

		struct impormation {
			char name[100];
			int age;
		};

		struct impormation *p;

		int num;

		printf("�Է��� �л� �� : ");
		scanf("%d", &num);
		
		p = (struct impormation*) malloc(sizeof(struct impormation) * num);

		for(int i = 0; i < num; i++) {
			printf("�̸��� ���̸� �Է� : ");
			scanf("%s %d", p[i].name, &(p[i].age));
		}
		printf("\n\n-- �л���� --\n");
		for(int i = 0; i < num; i++) {
		        printf("�̸�: %s , ����: %d\n", p[i].name, p[i].age);
		}
		free(p);
	}		
		

