#include <stdio.h>
	void main() {
		void gugu(int a){
			for(int i = 1; i <= 9; i++){
				int result = a*i;
				printf("%d X %d = %2d\n", a, i, result); 
			}
		}
		int num;
		printf("출력하고 싶은 단을 입력 : ");
		scanf("%d", &num);

		gugu(num);
	}
