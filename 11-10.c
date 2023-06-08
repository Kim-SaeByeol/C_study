#include <stdio.h>
	void main(){
		
		FILE *src;
		src = fopen("c:\\c_study\\gugu.txt", "w");

		for(int i = 2; i < 10; i++){
		fprintf(src, "   #%d´Ü#   ", i);
		}
		fprintf(src, "\n\n");

		for(int i = 1; i < 10; i++) {
			for(int j = 2; j < 10; j++){
				fprintf(src, "%d X %d = %2d ", j, i, j*i);
			}
			fprintf(src, "\n");
		}	
	}



