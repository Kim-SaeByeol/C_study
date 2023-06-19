#include <stdio.h>
	void main(){
		int arr[4];
		int hap = 0;
	
		for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
			printf("%d번째 숫자를 입력하세요 : ",i+1);
			scanf("%d", &arr[i]);
			hap += arr[i];
		}
		printf("합계 ==> %d", hap);
	}
