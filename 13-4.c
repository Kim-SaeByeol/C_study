#include <stdio.h>
	void main() {
		struct student {
			char name[10];
			int ko_num;
			int en_num;
			int avg;
		};
		
		struct student stu[3];
		
		for(int i = 0; i < sizeof(stu)/sizeof(stu[0]); i++){
		printf("%d��° �л�\n", i+1);	
			
		printf("�л� �̸� ==> ");
		scanf("%s", stu[i].name, 9);
		printf("���� ���� ==> ");
		scanf("%d", &stu[i].ko_num);
		printf("���� ���� ==> ");
		scanf("%d", &stu[i].en_num);
		
		stu[i].avg = (stu[i].ko_num + stu[i].en_num)/2;
		}

		printf("--------------------------------------------------------\n");

		for(int i = 0; i < sizeof(stu)/sizeof(stu[0]); i++){
		printf("%d �л�\n", i+1);	
			
		printf("�л� �̸� ==> %s\n", stu[i].name);
		printf("���� ���� ==> %d\n", stu[i].ko_num);
		printf("���� ���� ==> %d\n", stu[i].en_num);
		printf("��� ���� ==> %2.2f\n", (float)stu[i].avg);
		}
	}





