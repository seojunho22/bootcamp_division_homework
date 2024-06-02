/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
	int time;
	while (1) {
		scanf_s("%d", &time);
		if (time >= 0 && time < 24) {
			break;
		}
		else {
			printf("잘 못 입력 하였습니다.");
		}
	}
	if (time >= 0 && time < 12){
		printf("AM");
	}
	else {
		printf("PM");
	}
	return 0;
}