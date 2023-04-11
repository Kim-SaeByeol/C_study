#include <stdio.h>
//문제 : 입력한 두 수 사이의 합계를 구하되, 원하는 배수를 선택하는 프로그램을 작성하라. 
	
void main() {
	
	//정수타입인 시작값 start, 끝값 end , 배수 multiple 변수 선언
	int start, end, multiple;
	printf("합계의 시작값 ==> ");
	scanf("%d", &start);

	printf("합계의 끝값 ==> ");
	scanf("%d", &end);

	printf("배수 ==> ");
	scanf("%d", &multiple);

	//합을 저장할 sum 변수 생성.
	int sum = 0;

	//시작값 부터 끝값 까지 +1씩 증가하는 반복하는 for문.
	for (int i = start; i <= end; i++) {
		
		//i의 값이 변수 multiple 의 값으로 나누어떨어지면 i는 multiple의 변수.
		if (i % multiple == 0)
		sum += i;
	}
	printf("%d 부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, multiple, sum);
}
