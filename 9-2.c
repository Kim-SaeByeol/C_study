#include <stdio.h>
	void main() {
		char stack [5];
		char top = 'A';
		int a;
			
		for (int i = 0; ; ){
			printf("<1> 자동차 넣기 <2> 자동차 빼기 <3> 종료하기 : (정수 입력) ");
			scanf("%d", &a);
			printf("\n");
			if(a == 1 && i > 5){
				printf("터널이 꽉 차서 차가 못 들어감\n");	
			} else if (a == 1 && i < 6) {
				stack[i] = top;
				printf("%c 자동차가 터널에 들어감\n", stack[i]);
				i++;
				top++;
			}
			
			if(a == 2 && i == 0){
				printf("빠져나갈 자동차가 없음\n");
			}else if(a == 2 && i > 0) {
				printf("%c 자동차가 터널에서 빠져나감\n", stack[i]);
				stack[i] = ' ';
				i--;
				top--;
			}
			
			if(a == 3) {
				printf("현재 터널에 %d대의 차량이 있음\n프로그램을 종료합니다.\n", i);	
				break;
			}
			if(a != 1 && a != 2 && a != 3){
				printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
			}		
		}
	}
