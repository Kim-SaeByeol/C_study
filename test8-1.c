#include <stdio.h>
	void main() {
		int val;
		int hap = 0;
		for(int i = 0; i < 4; i++){
			printf("%d��° ���ڸ� �Է��ϼ��� : ", i+1);
			scanf("%d", &val);
			hap += val;
		}

		printf("�հ� ==> %d", hap);
	}

