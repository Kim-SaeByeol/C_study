#include <stdio.h>
	void main() {
	int a;

	printf("1~4 사이로 정수를 입력하세요.");
	scanf ("%d", &a);
	switch (a){
	case  1: 
	      printf ("1을 선택 하셨군요");
	      break;
	case  2:
	      printf("2를 선택하셨군요"); 
	case  3:
       		printf("3을 선택하셨군요");
  		break;
	case 4: 
		printf("4를 선택하셨군요");
		break;
	}
}
