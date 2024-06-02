/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main(void) {
	char alp;
	scanf("%c", &alp);
	if (alp == 97 || alp == 101 || alp == 105 || alp == 111 || alp == 117) {
		printf("O");
	}
	else {
		printf("X");
	}
	return 0;
}