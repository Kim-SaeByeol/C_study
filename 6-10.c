#include <stdio.h>
	void main() {
		int a, b, c, sum = 0;
		printf("���۰�, ����, ������ �Է� : ");
		scanf("%d %d %d",&a, &b, &c);
		for(int i = a; i < b; i+=c) {
		sum += i;
		}
	printf("%d���� %d���� %d�� ������ ���� ��: %d", a, b, c, sum);
	}	
