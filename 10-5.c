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
				printf("�Է��� �߸��ϼ̽��ϴ�.");
				break;
		}
		return result;
	}
		
	void main() {
		int num1 , num2;
		char res;
		printf("��� �Է� (< + > , < - > , < * >, < / > ) : ");
		scanf("%s", &res);

		printf("\n����� �� ���ڸ� �Է� : ");
		scanf("%d %d", &num1, &num2);

		int result = calc(num1, res, num2);
		printf("\n��� ����� : %d\n", result);
	}
