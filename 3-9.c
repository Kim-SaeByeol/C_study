#include <stdio.h>
	void main() {
		int a, b, c, d;

		a = 100 + 100;	// a = 200
		b = a + 100;	// b = 200 + 100 = 300
		c = a + b - 100;	// c = 200 + 300 - 100 = 400
		d = a + b + c;		// d = 200 + 300 + 400 = 900

		printf ("a, b, c, d의 값은 ==> %d, %d, %d, %d \n", a, b, c, d);
		
		a = b = c = d = 100;		// 모두 100 

		printf ("a, b, c, d의 값은 ==> %d, %d, %d, %d \n", a, b, c, d);

		a = 100;
		a = a + 200;		// a = 100 + 200 = 300
		printf("a의 값 ==> %d \n" , a);
	}
