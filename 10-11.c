#include <stdio.h>
	int gugu(int v1) {
		if(v1 < 10 && v1 > 0)
			for(int i = 1; i < 10; i++)
				printf("%d X %d = %3d\n", v1, i, v1*i); 
	
		else
			printf("입력 값을 초과했습니다.");

		return 0;
	}
	void main() {
		int num1;
		printf("원하시는 1~9단 까지 출력합니다.\n");
		printf("출력하고 싶은 단을 입력 : (10 미만의 정수 입력) ");
		scanf ("%d", &num1);

		gugu(num1);
	}
