/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main(void) {
	int num;
	int add = 0, fac = 1;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		add += i + 1;
	}
	for (int j = 0; j < num; j++) {
		fac *= j + 1;
	}
	printf("%d\n%d", add, fac);
	return 0;
}