#include <stdio.h>
	void main() {
		int a, b, result;
		char n; 
		printf("������ ���ٷ� ����� �Է��ϼ���. : ");
	       scanf("%d %c %d", &a, &n, &b);
		
	       switch (n) {
		       case '+' : 
			       result =  a + b;
			       printf("%d + %d = %d�Դϴ�.\n", a, b, result);
				 break; 
		        case '-' :
				result =  a - b;
		 		printf("%d - %d = %d�Դϴ�.\n", a, b, result);
				 break; 
			case '*' :
				result =  a * b;
				printf("%d * %d = %d�Դϴ�.\n", a, b, result);
				 break; 
			case '/' :
				result =  a / b;
				printf("%d / %d = %d�Դϴ�.\n", a, b, result);
				 break; 
			case '%' :
				result =  a % b;
				printf("%d %% %d = %d�Դϴ�.\n", a, b, result);
				 break; 
			default :
                                printf("�����ڸ� �߸� �Է��߽��ϴ�.");
	       }
	}
		       

