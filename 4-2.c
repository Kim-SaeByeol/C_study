#include <stdio.h>
	void main() {
		int a = 2, b = 3, c = 4;
		int result1, mok, namugi;
		float result2;

		result1 = a + b - c;
		printf("%d = %d + %d - %d \n", result1, a, b, c);

		result1 = a + b * c;
		printf("%d = %d + %d * %d \n", result1, a, b, c);

		result2 = a * b / (float) c;
		printf("%f = %d * %d / %f \n", result2, a, b, c);

		mok = c / b;
		printf(" %d = %d / %d \n", mok, c, b);

		namugi = c % b;
		printf("%d = %d %% %d \n", namugi, c, b);
	}
