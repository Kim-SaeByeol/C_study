#include <stdio.h>
	void main(){
		char s[8] = "Basic-C";
		char *p = s;

		printf("&s[3] ==> %s\n", &s[3]);
		printf("p+3 ==> %s\n", p+3);

		printf("s[3] ==> %c\n", s[3]);
		printf("*(p+3) ==> %c\n", *(p+3));
	}
