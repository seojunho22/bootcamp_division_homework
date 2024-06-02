/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main(void) {
	int num;
	int i = 1;
	int j;
	scanf_s("%d", &num);
	while (num) {
		j = num % 10;
		num /= 10;
		printf("%d", j);
	}
	return 0;
}