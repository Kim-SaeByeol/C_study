#include <stdio.h>
	void main() {
		void gugu(int a){
			for(int i = 1; i <= 9; i++){
				int result = a*i;
				printf("%d X %d = %2d\n", a, i, result); 
			}
		}
		int num;
		printf("����ϰ� ���� ���� �Է� : ");
		scanf("%d", &num);

		gugu(num);
	}
