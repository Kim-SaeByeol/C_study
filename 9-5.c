#include <stdio.h>
	void main(){
		int aa[3] = {10, 20, 30};

		for(int i = 0; i<3; i++){
			printf("&aa[%d]´Â %d, aa+%dÀº %d\n", i, &aa[i], i, aa+i);
		}
	}
