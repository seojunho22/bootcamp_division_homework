/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main(void) {
	int age, height;
	scanf_s("%d", &age);
	scanf_s("%d", &height);
	if (age < 14) {
		if (height < 160) {
			printf("O");
		}
		else {
			printf("X");
		}
	}
	else {
		printf("X");
	}
	return 0;
}