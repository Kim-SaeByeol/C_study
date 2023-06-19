#include <stdio.h>
	void main() {
		int aa[] = {1, 2, 3, 4, 5};
		int count;

		count = sizeof(aa)/sizeof(int);

		printf("배열 aa[]의 요소의 개수는 %d 입니다.", count);
	}		
