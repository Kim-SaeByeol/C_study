#include <stdio.h>
#include <malloc.h>

	void main(){
		
		int num, hap = 0;		
		int val;
		printf("입력할 개수는 ? : ");
		scanf("%d", &num);

		int *p = (int*)malloc(sizeof(int) * num);
		int arr[100];

		for(int i = 0; i < num; i++){
			printf("%d 번째 숫자 : ", i+1 );
			scanf("%d", &val);
			arr[i] = val;
			
			p[i] = arr[i];
		}

		for(int i = 0; i < num; i++) {
			if(p[i] % 2 ==0)
				hap += p[i];	
		}
		printf("입력한 짝수의 합 ==> %d", hap);
		free(p);
	}



		
