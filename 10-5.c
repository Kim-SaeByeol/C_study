#include <stdio.h>
	int calc (int v1, char v2, int v3){
		int result;

		switch (v2) {
			case '+' : 
				result = v1 + v3;
				break;
			
			case '-' : 
				result = v1 - v3;
				break;
			
			case '*' : 
				result = v1 * v3;
				break;
			
			case '/' : 
				result = v1 / v3;
				break;
			
			defualt :
				printf("입력을 잘못하셨습니다.");
				break;
		}
		return result;
	}
		
	void main() {
		int num1 , num2;
		char res;
		printf("계산 입력 (< + > , < - > , < * >, < / > ) : ");
		scanf("%s", &res);

		printf("\n계산할 두 숫자를 입력 : ");
		scanf("%d %d", &num1, &num2);

		int result = calc(num1, res, num2);
		printf("\n계산 결과는 : %d\n", result);
	}
