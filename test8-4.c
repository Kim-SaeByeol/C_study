#include <stdio.h>
	void main() {
		int aa[4] = {100, 200, 300, 400};
		int bb[ ] = {100, 200, 300, 400};
		int cc[4] = {100, 200};
		int dd[4] = {0};

		for(int i = 0; i < sizeof(aa)/sizeof(int); i++)
			printf("aa[%d] ==> %d\t", i, aa[i]);

			printf("\n");
		
		for(int i = 0; i <sizeof(bb)/sizeof(int); i++)
			printf("aa[%d] ==> %d\t", i, bb[i]);

			printf("\n");
	
		for(int i = 0; i <sizeof(cc)/sizeof(int); i++)
			printf("aa[%d] ==> %d\t", i, cc[i]);
			printf("\n");

		for(int i = 0; i <sizeof(dd)/sizeof(int); i++)
			printf("aa[%d] ==> %d\t", i, dd[i]);

			printf("\n");

	}
