#include <stdio.h>
	void main() {
		int a, b;
		char c;
		while (1) {
			printf("계산할 두 수를 입력 (멈추려면 Ctrl + C) : ");
			scanf("%d %d", &a, &b);
			printf("계산할 연산자를 입력하세요 : ");
			scanf(" %c", &c);

			switch (c) {
				case ('+') :
				       printf("%d + %d = %d 입니다.\n", a, b, a+b);
			       		break;
			 	case ('-') :
					printf("%d - %d = %d 입니다.\n", a, b, a-b);
					break;		
				case ('*') :
					printf("%d * %d = %d 입니다, \n", a, b, a*b);
					break;
				case ('/') :
					printf("%d / %d = %d 입니다. \n", a, b, (float)a/b);
					break;
				case ('%') :
					printf("%d % %d = %d 입니다. \n", a, b, a%b);
					break;
				defalt :
					printf("연산자를 잘못 입력하셨습니다.");
					break;
			}
		}
	}

