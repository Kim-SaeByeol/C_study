#include <stdio.h>
	void main() {
		int aa[] = {10, 20, 30, 40, 50};
		int count;

		count = sizeof(aa) / sizeof(int);

		printf("�迭aa[]�� ����� ������ %d �Դϴ�.", count);
	}
