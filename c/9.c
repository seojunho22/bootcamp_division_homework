/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main(void) {
	int num;
	int total = 0;
	while (1) {
		scanf_s("%d", &num);
		if (num > 0) {
			break;
		}
		printf("X\n");
	}
	for (int i = 0; i < num; i++) {
		total += i + 1;
	}
	printf("%d", total);
	return 0;
}