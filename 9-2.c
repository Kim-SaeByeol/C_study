#include <stdio.h>
	void main() {
		char stack [5];
		char top = 'A';
		int a;
			
		for (int i = 0; ; ){
			printf("<1> �ڵ��� �ֱ� <2> �ڵ��� ���� <3> �����ϱ� : (���� �Է�) ");
			scanf("%d", &a);
			printf("\n");
			if(a == 1 && i > 5){
				printf("�ͳ��� �� ���� ���� �� ��\n");	
			} else if (a == 1 && i < 6) {
				stack[i] = top;
				printf("%c �ڵ����� �ͳο� ��\n", stack[i]);
				i++;
				top++;
			}
			
			if(a == 2 && i == 0){
				printf("�������� �ڵ����� ����\n");
			}else if(a == 2 && i > 0) {
				printf("%c �ڵ����� �ͳο��� ��������\n", stack[i]);
				stack[i] = ' ';
				i--;
				top--;
			}
			
			if(a == 3) {
				printf("���� �ͳο� %d���� ������ ����\n���α׷��� �����մϴ�.\n", i);	
				break;
			}
			if(a != 1 && a != 2 && a != 3){
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
			}		
		}
	}