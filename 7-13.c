#include <stdio.h>
//���� : �Է��� �� �� ������ �հ踦 ���ϵ�, ���ϴ� ����� �����ϴ� ���α׷��� �ۼ��϶�. 
	
void main() {
	
	//����Ÿ���� ���۰� start, ���� end , ��� multiple ���� ����
	int start, end, multiple;
	printf("�հ��� ���۰� ==> ");
	scanf("%d", &start);

	printf("�հ��� ���� ==> ");
	scanf("%d", &end);

	printf("��� ==> ");
	scanf("%d", &multiple);

	//���� ������ sum ���� ����.
	int sum = 0;

	//���۰� ���� ���� ���� +1�� �����ϴ� �ݺ��ϴ� for��.
	for (int i = start; i <= end; i++) {
		
		//i�� ���� ���� multiple �� ������ ����������� i�� multiple�� ����.
		if (i % multiple == 0)
		sum += i;
	}
	printf("%d ���� %d������ %d����� �հ� ==> %d\n", start, end, multiple, sum);
}
