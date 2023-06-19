#include <stdio.h>
	void main() {
		int aa[100], bb[100];

		for(int i = 0; i<100; i++){
			aa[i] = i*2;
		}

		for(int i = 0; i < 100; i++) {
			bb[i] = aa[99-i];
		}
		printf("bb[0] -> %d\n bb[99] => %d", bb[0], bb[99]);
	}
