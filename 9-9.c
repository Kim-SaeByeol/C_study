#include <stdio.h>
	void main() {
		char s[8] = "Basic-C";
		char (*p)[8] = &s;
		
		for(int i = 0; i<sizeof(s); i++){
			printf("%c", (*p)[i] );
		}
		printf("\n");
	}
			
