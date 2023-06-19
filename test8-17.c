#include <stdio.h>
	void main() {
		int gugu[9][9];
		int col = sizeof(gugu[0]) / sizeof(int);
		int low = sizeof(gugu) / sizeof(gugu[0]);

		for(int i = 1; i <= low; i++) {
		       for(int j = 2; j <= col; j++){
			       int result = col*low;
		       		printf("%d X %d = %2d  ", j, i, result);
		       }
			printf("\n");
		}		       
	}
