#include <stdio.h>
#include <malloc.h>

	void main(){
		
		int num, hap = 0;		
		int val;
		printf("�Է��� ������ ? : ");
		scanf("%d", &num);

		int *p = (int*)malloc(sizeof(int) * num);
		int arr[100];

		for(int i = 0; i < num; i++){
			printf("%d ��° ���� : ", i+1 );
			scanf("%d", &val);
			arr[i] = val;
			
			p[i] = arr[i];
		}

		for(int i = 0; i < num; i++) {
			if(p[i] % 2 ==0)
				hap += p[i];	
		}
		printf("�Է��� ¦���� �� ==> %d", hap);
		free(p);
	}



		
