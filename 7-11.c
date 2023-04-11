#include <stdio.h>
	void main() {
		int sum = 0;
		int i =0;
		for(i = 1; i <= 100; i++) {
			sum += i;
			if(sum > 2000) 
				goto mygoto;
		}
		mygoto :
			printf("1부터 %d까지 합하면 2000이 넘어요.\n", i);
	}
