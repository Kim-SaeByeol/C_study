#include <stdio.h>
#include <string.h>
	void main(){
		char ss[] = "XYZ";
		char tt[] = "xyz";
		int result;

		result = strcmp(ss, tt);
		// str1과 str2가 같으면 result는 0이 됩니다.
		// str1이 str2보다 사전순으로 앞에 있으면 result는 음수가 됩니다.
		// str1이 str2보다 사전순으로 뒤에 있으면 result는 양수가 됩니다.
	
		printf("두 문자열의 비교결과 ==> %d\n", result);
	}
