#pragma once

//기능을 위한 헤더파일

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>

int select();
void error();
void slow_print(const char* str, int delay_ms);   //출력할 텍스트와 지연 시간.
void delay_(int milliseconds);                     //밀리초 단위 설정위한 함수 이건 위 함수를 위한 함수라 사용 x
void obtain();





int delay = 10;
extern int key_1, key_2, key_3, key_4, key_5, key_6, key_7, key_8;

void error() {
	printf("잘못 입력하였습니다.\n");
	return;
}



int select() {
	int x;
	printf("번호를 선택하세요\n");
	scanf("%d", &x);
	return x;
}


void obtain() {
	system("cls");
	if (key_1 == 1) {
		printf("- 신문에서 신원을 감추고 도망다니며 고급정보들을 훔쳤다는 사람의 이름이 내 이름과 같았고 그가 특정장소에서 목격되었다고 적혀있었다.\n\n");
	}
	if (key_2 == 1) {
		printf("- 흑백사진 속 젊은 여성이 내 어깨에 손을 올리고 있었다. 이 여성과 내가 어떤 일을 하려고 했던 거 같은데...\n\n");
	}
	if (key_3 == 1) {
		printf("-다이어리에서 얻은 메모이다. 실험 시작일 : 7월 23일 \n\n");
	}
	if (key_4 == 1) {
		printf("-책상 위에서 얻은 열쇠이다.\n\n");
	}
	if (key_5 == 1) {
		printf("-책상 위에서 얻은 메모장이다.  돼지고기라는 단어가 적혀있다.\n\n");
	}
	if (key_6 == 1) {
		printf("-소파에서 얻은 가운이다.\n\n");
	}
	if (key_7 == 1) {
		printf("-실험 보고서에서 얻은 정보 : 실험에 참여했던 연구원인 나는 기억을 조작당했지만, 완전히 지워지지 않은 기억 덕에 연구소의 감시를 피해 진실을 폭로하기 위해 탈출을 결심한다.\n\n");
	}
	if (key_8 == 1) {
		printf("-휴게실 탁자위의 서류에서 얻은 정보: \"여자는거울\"이라는 단어가 적혀있다.\n\n");
	}


}

void delay_(int milliseconds) {
	clock_t start_time = clock();
	// 지정한 밀리초만큼 대기
	while (clock() < start_time + milliseconds * (CLOCKS_PER_SEC / 1000));
}

void slow_print(const char* str, int delay_ms) {
	while (*str) {
		putchar(*str);    // 한 글자 출력
		fflush(stdout);   // 버퍼 비우기 (바로 출력)
		delay_(delay_ms);  // 지연 시간 설정
		str++;
	}
	putchar('\n');  // 줄바꿈
}

