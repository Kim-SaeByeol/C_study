#include <stdio.h>
#include <string.h>
	void main(){
		char ss[20];
	        char tt[20];	
		int r1, r2;

		puts("ù��° ���ڿ��� �Է��ϼ���.");
		fgets(ss, 20, stdin);
		ss[strcspn(ss, "\n")] = '\0';

		puts("�ι�° ���ڿ��� �Է��ϼ���.");
		fgets(tt, 20, stdin);
		tt[strcspn(tt, "\n")] = '\0';

	
		r1 = strlen(ss);
		r2 = strlen(tt);

		printf("ù��° ���ڿ��� ���� ==> %d\n", r1);
		printf("ù��° ���ڿ��� ���� ==> %d\n", r2);

		if(strcmp(ss, tt) == 0)
			puts("�� ���ڿ��� ������ �����ϴ�.\n");
		else 
			puts("�� ���ڿ��� ������ �ٸ��ϴ�.\n");

	}
