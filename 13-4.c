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
		printf("%d번째 학생\n", i+1);	
			
		printf("학생 이름 ==> ");
		scanf("%s", stu[i].name, 9);
		printf("국어 점수 ==> ");
		scanf("%d", &stu[i].ko_num);
		printf("영어 점수 ==> ");
		scanf("%d", &stu[i].en_num);
		
		stu[i].avg = (stu[i].ko_num + stu[i].en_num)/2;
		}

		printf("--------------------------------------------------------\n");

		for(int i = 0; i < sizeof(stu)/sizeof(stu[0]); i++){
		printf("%d 학생\n", i+1);	
			
		printf("학생 이름 ==> %s\n", stu[i].name);
		printf("국어 점수 ==> %d\n", stu[i].ko_num);
		printf("영어 점수 ==> %d\n", stu[i].en_num);
		printf("평균 점수 ==> %2.2f\n", (float)stu[i].avg);
		}
	}





