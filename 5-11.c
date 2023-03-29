#include <stdio.h>
	void main() {
		int a, b, result;
		char n; 
		printf("수식을 한줄로 띄어쓰기로 입력하세요. : ");
	       scanf("%d %c %d", &a, &n, &b);
		
	       switch (n) {
		       case '+' : 
			       result =  a + b;
			       printf("%d + %d = %d입니다.\n", a, b, result);
				 break; 
		        case '-' :
				result =  a - b;
		 		printf("%d - %d = %d입니다.\n", a, b, result);
				 break; 
			case '*' :
				result =  a * b;
				printf("%d * %d = %d입니다.\n", a, b, result);
				 break; 
			case '/' :
				result =  a / b;
				printf("%d / %d = %d입니다.\n", a, b, result);
				 break; 
			case '%' :
				result =  a % b;
				printf("%d %% %d = %d입니다.\n", a, b, result);
				 break; 
			default :
                                printf("연산자를 잘못 입력했습니다.");
	       }
	}
		       

