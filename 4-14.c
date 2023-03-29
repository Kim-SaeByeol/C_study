#include <stdio.h>
	void main() {
		printf("년도를 입력하세요. : ");
		int a;
		scanf("%d", &a);
		if ( a%4 ==0){
			if(a%100 !=0){
			printf("%d 년은 윤년입니다.\n",a);
			}else if(a % 400 == 0) {
			printf("%d 년은 윤년입니다.\n", a);
			}else {
			printf("%d 년은 윤년이 아닙니다.\n", a);
			}
		}
		
			if(a%4 !=0){
				printf ("%d 년은 윤년이 아닙니다.",a);
				}
		
	}		
