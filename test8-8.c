#include <stdio.h>
	void main() {
		char ss[5] = "ancd";
		char arr[5];

		for(int i = 0; i < 4; i++){
			arr[3 - i] = ss[i];
		}
		
		arr[4] = '\0';
		printf("�Ųٷ� ����� ��� ==> %s", arr);
	}

