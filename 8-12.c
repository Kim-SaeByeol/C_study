#include <stdio.h>
#include <string.h>
	void main(){
		char ss[] = "XYZ";
		char tt[] = "xyz";
		int result;

		result = strcmp(ss, tt);
		// str1�� str2�� ������ result�� 0�� �˴ϴ�.
		// str1�� str2���� ���������� �տ� ������ result�� ������ �˴ϴ�.
		// str1�� str2���� ���������� �ڿ� ������ result�� ����� �˴ϴ�.
	
		printf("�� ���ڿ��� �񱳰�� ==> %d\n", result);
	}