#include <stdio.h>
#include <malloc.h>
	void main() {
		struct point {
			char name[10];
			int ko_lan;
			int en_lan;
		};
		
		struct point student;

		printf("�л� �̸� : ");
		scanf("%s", student.name, 9);
		printf("���� ���� : ");
		scanf("%d", &student.ko_lan);
		printf("���� ���� : ");
		scanf("%d", &student.en_lan);
		
		
		printf("�л� �̸� ==> %s\n", student.name);
		printf("���� ���� ==> %d\n", student.ko_lan);
		printf("���� ���� ==> %d\n", student.en_lan);
		printf("��� ���� ==> %3.1f\n", (float)(student.ko_lan + student.en_lan)/2 );
	}
		
				
