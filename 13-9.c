#include <stdio.h>
#include <malloc.h>
#include <string.h>

	void main() {
		int num, size;

		printf("학생수 ");
		scanf("%d", num);

		char *p[num];

		struct impormation {
			char name[100];
			int age;
		};

		struct impormation im[num];
		

		for(int i = 0; i < num; i++) {
			printf("이름과 나이를 입력 : ");
			gets(im[i].name);
			gets(im[i].age);
				
			size = strien(im[i].name);
			p[i] = (char*) malloc ( (sizeof(char) * size ) + 1);

			strcopy(p[i], im[i].name);
		}
		
		for(int i = 0; i < num; i++) {
			printf("이름 : %s , 나이 : %d\n", p[i], im[i].age);
		}
	}		
		

