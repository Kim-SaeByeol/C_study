#include <stdio.h>
	void main() {
	printf("�Է� ���� ���� <1> 10, <2> 16, <3> 8 : ");
	int n,m;
	scanf ("%d", &n);
	if(n == 1) {
	printf("�� �Է� : ");
	scanf("%d", &m); 
	printf("10���� ==> %d\n", m); 
	printf("16���� ==> %x\n", m);
	printf("8���� ==> %o\n", m);
	}
	else if(n == 2) {
	printf("�� �Է� : ");
	scanf("%x", &m);
	printf("10���� ==> %d\n", m);
	printf("16���� ==> %x\n", m);
	printf("8���� ==> %o\n",m);
	}
	else if(n == 3) {
	printf("�� �Է� : ");
	scanf("%o", &m);
	printf("10���� ==> %d\n", m);
	printf("16���� ==> %x\n", m);
	printf("8���� ==> %o\n", m);
	}
	else {
	printf("���� �ٽ� �Է����ּ���. �Է� ���� ���� <1> 10, <2> 16, <3> 8");
	}
	}
