#include <stdio.h>
	void main() {
		while (1) {
			int a, b;
		       printf("더할 두 수 입력 (멈추려면 Ctrl + C : ");
		       scanf("%d %d" , &a, &b);	       
		       printf("%d + %d = %d\n", a, b, a+b);
		}
	}	
