#include <stdio.h>
	void main() {
		int a, b;
		char c;
		while (1) {
			printf("����� �� ���� �Է� (���߷��� Ctrl + C) : ");
			scanf("%d %d", &a, &b);
			printf("����� �����ڸ� �Է��ϼ��� : ");
			scanf(" %c", &c);

			switch (c) {
				case ('+') :
				       printf("%d + %d = %d �Դϴ�.\n", a, b, a+b);
			       		break;
			 	case ('-') :
					printf("%d - %d = %d �Դϴ�.\n", a, b, a-b);
					break;		
				case ('*') :
					printf("%d * %d = %d �Դϴ�, \n", a, b, a*b);
					break;
				case ('/') :
					printf("%d / %d = %d �Դϴ�. \n", a, b, (float)a/b);
					break;
				case ('%') :
					printf("%d % %d = %d �Դϴ�. \n", a, b, a%b);
					break;
				defalt :
					printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.");
					break;
			}
		}
	}
