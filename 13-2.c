#include <stdio.h>
#include <malloc.h>
	void main() {
		struct point {
			char name[10];
			int ko_lan;
			int en_lan;
		};
		
		struct point student;

		printf("학생 이름 : ");
		scanf("%s", student.name, 9);
		printf("국어 점수 : ");
		scanf("%d", &student.ko_lan);
		printf("영어 점수 : ");
		scanf("%d", &student.en_lan);
		
		
		printf("학생 이름 ==> %s\n", student.name);
		printf("국어 점수 ==> %d\n", student.ko_lan);
		printf("영어 점수 ==> %d\n", student.en_lan);
		printf("평균 점수 ==> %3.1f\n", (float)(student.ko_lan + student.en_lan)/2 );
	}
		
				
