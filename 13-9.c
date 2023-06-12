#include <stdio.h>
#include <malloc.h>

	void main() {

		struct impormation {
			char name[100];
			int age;
		};

		struct impormation *p;

		int num;

		printf("입력할 학생 수 : ");
		scanf("%d", &num);
		
		p = (struct impormation*) malloc(sizeof(struct impormation) * num);

		for(int i = 0; i < num; i++) {
			printf("이름과 나이를 입력 : ");
			scanf("%s %d", p[i].name, &(p[i].age));
		}
		printf("\n\n-- 학생명단 --\n");
		for(int i = 0; i < num; i++) {
		        printf("이름: %s , 나이: %d\n", p[i].name, p[i].age);
		}
		free(p);
	}		
		

