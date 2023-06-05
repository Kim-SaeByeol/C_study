#include <stdio.h>
	void main(){
		char stack[5];
		char top = 'A';

		for(int i = 0; i<= 2; i++){
			stack[i] = top;
			printf("%c 자동차가 터널에 들어감\n", stack[i]);
			top++;
		}
		printf("\n");

		for(int i = 2; i >= 0; i--){
			printf("%c 자동차가 터널에서 빠져나감\n", stack[i]);
			stack[i] = ' ';
			top--;
		}
	}
