#include <stdio.h>
	void main() {
		int a;
		do {
			printf("�մ� �ֹ��Ͻðڽ��ϱ� ?\n");
		        printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==> ");
			scanf("%d", &a);	
			
			switch (a) {
				case (1):
				       printf("#ī��� �ֹ��ϼ̽��ϴ�.\n");	
					break;
				case (2) :
					printf("#īǪġ�� �ֹ��ϼ̽��ϴ�.\n");
					break;
				case (3) :
					printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�.\n");
					break;
				case (4) :
					printf("�ֹ��Ͻ� ���� �غ��ϰڽ��ϴ�.\n");
					break;
				default :
					printf("�߸� �Է��ϼ̽��ϴ�. �����մϴ�.\n");
					break;
			}	
		} while (a != 4);
	}