/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main(void) {
	int year, month;
	scanf_s("%d", &year);
	while (1) {
		scanf_s("%d", &month);
		if (month > 0 && month < 13) {
			break;
		}
		printf("잘 못 입력하였습니다.");
	}
	if (month == 2) {
		if ((year % 4) == 0) {
			if ((year % 100 == 0)) {
				if ((year % 400 == 0)) {
					printf("29");
					return 0;
				}
				printf("28");
				return 0;
			}
			printf("29");
			return 0;
		}
		printf("28");
		return 0;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf("30");
	}
	else {
		printf("31");
	}
	return 0;
}