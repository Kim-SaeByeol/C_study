#include <stdio.h>
	void main(){
		int arr[4];
		int hap = 0;
	
		for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
			printf("%d��° ���ڸ� �Է��ϼ��� : ",i+1);
			scanf("%d", &arr[i]);
			hap += arr[i];
		}
		printf("�հ� ==> %d", hap);
	}
