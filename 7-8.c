#include <stdio.h>
	void main() {
		int a, b;
		while (1) {
			printf("더할 두 수 입력 (멈추려면 0을 입력) : ");
			scanf ("%d %d", &a, &b);
			if (a==0 || b==0){
				printf("0을 입력하여 멈추었습니다.");
				break;
			}
			printf("%d + %d = %d\n", a, b, a+b);

		}
	}
