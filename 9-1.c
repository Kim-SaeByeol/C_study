#include <stdio.h>
	void main(){
		char stack[5];
		char top = 'A';

		for(int i = 0; i<= 2; i++){
			stack[i] = top;
			printf("%c �ڵ����� �ͳο� ��\n", stack[i]);
			top++;
		}
		printf("\n");

		for(int i = 2; i >= 0; i--){
			printf("%c �ڵ����� �ͳο��� ��������\n", stack[i]);
			stack[i] = ' ';
			top--;
		}
	}
