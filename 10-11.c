#include <stdio.h>
	int gugu(int v1) {
		if(v1 < 10 && v1 > 0)
			for(int i = 1; i < 10; i++)
				printf("%d X %d = %3d\n", v1, i, v1*i); 
	
		else
			printf("�Է� ���� �ʰ��߽��ϴ�.");

		return 0;
	}
	void main() {
		int num1;
		printf("���Ͻô� 1~9�� ���� ����մϴ�.\n");
		printf("����ϰ� ���� ���� �Է� : (10 �̸��� ���� �Է�) ");
		scanf ("%d", &num1);

		gugu(num1);
	}
