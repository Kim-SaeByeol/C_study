#include <stdio.h>
	void main() {
		int aa[3];
		int *p;
		int hap = 0;
			
		for(int i = 0; i < 3; i++){
			printf("%d ��° ���� : ", i+1);
			scanf("%d", &aa[i]);
			p = aa;
			hap = hap + *(p+i);
		}
		printf("�Է� ������ �� ==> %d ", hap);
	}
		
		


