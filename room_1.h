#define _CRT_SECURE_NO_WARNINGS
#pragma once

//첫번째 방 텍스트 출력을 위한 헤더파일

#include "insert.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>



void bed();
void bed_1();
void desk();
void desk_1();
void desk_2();
void door();

int key_1, key_2, key_3, key_4;
extern int phase;

void startStory_1() {
	printf("잃어버린 기억\n\n");
	printf("엔터키를 눌러 시작해주세요...\n");
	getchar();

	printf("눈을 뜬 순간, 천장에서 희미하게 깜박이는 전구가 보였다. 머리가 지끈거리며 생각이 혼란스러웠다. \n");
	printf("여기서 무슨 일이 있었던 걸까? 나는 왜 여기 있는 걸까? 방 안에는 침대와 작은 책상, 그리고 문이 있었다.\n");
	printf("두리번거리는 사이, 문 뒤쪽에서 들리는 미묘한 소리에 몸이 움찔했다. 쫓기는 듯한 느낌에 빨리 이곳에서 벗어나야 한다는 본능적인 경고가 떠올랐다.\n\n");
}


void bed() {
	system("cls");
	int x;
	printf("\"침대 아래를 손으로 더듬어 보니 손끝에 종이가 닿았다.낡은 신문 한 장이었다.\n신문은 오래된 사건 기사로 뒤덮여 있었는데, 한 남자가 범죄 혐의로 경찰에 쫓기고 있다는 내용이었다.\n그의 사진을 보는 순간, 이상하게 익숙한 느낌이 들었다.\"\n");
	printf("1. 신문을 읽는다\n\n2. 신문을 무시하고 다른 곳을 조사한다\n");
	x = select();
	if (x == 1) bed_1();
	else if (x == 2) {
		printf("\"나는 더 이상 볼 필요가 없다고 판단하고 다른 곳을 둘러보기로 했다.왠지 모르게 더 급한 일이 생길 것만 같은 불길한 예감이 들었다.\"");
	}
	else error();
}

void bed_1() {
	system("cls");
	int x;
	printf("\"신문을 읽어 내려가니, 남자의 이름이 내 이름과 같다는 것을 깨닫고 충격을 받는다.\n기사에는 그가 신원을 감추고 도망다니며 고급 정보들을 훔쳤다는 내용이 있었고, 마지막으로 그가 특정 장소에서 목격되었다고 쓰여 있었다. \n이 정보는 내가 왜 이 방에 갇혀 있는지에 대한 단서가 될 것 같았다.\"\n\n");
	key_1 = 1;
	printf("1.침대를 더 탐색한다\n\n2.방을 마저 둘러본다.\n");
	x = select();
	system("cls");
	if (x == 1) {
		printf("\"침대 밑에 다시 손을 넣어 천천히 주변을 살펴보니, 작고 녹슨 상자가 있었다. 상자를 열자 낡은 흑백 사진이 나왔다. \n사진 속에는 젊은 여성이 내 어깨에 팔을 올리고 웃고 있었다. 사진을 보자 머리가 아프면서 흐릿하게나마 기억의 한 조각이 떠올랐다. \n이 여성과 내가 어떤 일을 하려고 했던 거 같은데.. 더 이상은 기억이 나지 않는다.\"\n");
		key_2 = 1;
	}
}

void desk() {
	system("cls");

	int x;
	printf("\"책상 위에는 열쇠와 다이어리가 있었다, 다이어리는 낡고 너덜너덜했다.다이어리를 펼쳐보니 글씨가 잔뜩 적혀 있었고, 페이지마다 누군가 급하게 쓴 듯한 흔적이 남아 있었다.\n내용은 알 수 없는 문자와 숫자들이 섞여 있었고, 군데군데 '숨겨야 한다'라는 문구가 반복적으로 나타났다.\"\n");
	printf("1. 다이어리에서 특정 단어와 문장을 주의 깊게 본다.\n\n2. 무시하고 열쇠를 집는다\n");
	x = select();
	if (x == 1) desk_1();
	else if (x == 2)desk_2();
	else error();
}

void desk_1() {
	system("cls");
	key_3 = 1;
	printf("어떠한 실험에 대한 내용인 것 같다. 실험이 7월 23일에 시작되었다고 적혀있다. \n빠르게 기억 둔 다음, 다이어리를 덮었다.\n\n");

}

void desk_2() {
	system("cls");
	key_4 = 1;
	printf("\"열쇠를 획득했다. 이걸로 문을 열 수 있지 않을까?\"\n");
}


void door() {
	system("cls");
	if (key_4 == 0) {
		printf("\"문을 열어보려 했으나 잠겨 있었다. 나는 열쇠가 있을 만한 곳으로 시선을 돌렸다. 방에 있는 물건을 더 꼼꼼히 살펴봐야 했다.\"\n");
		printf("선택지로 돌아갑니다\n");
	}
	else if (key_4 == 1) {
		int x;
		printf("열쇠는 돌아갔지만 도어락으로 이중 잠금이 돼있었다.\n\n");
		printf("1. 비밀번호를 입력한다\n\n");
		printf("2. 단서를 더 찾아본다\n\n");
		x = select();
		if (x == 1) {
			char password[100];
			printf("비밀번호를 입력하세요 : ");
			scanf("%s", &password);
			if (strcmp(password, "0723") == 0) {
				printf("문이 열렸다!\n");
				phase = 1;
			}
			else {
				printf("비밀번호가 틀린 것 같다.\n");
				system("pause");
				system("cls");
			}
		}
		else if (x == 2) {
			system("cls");
			printf("다른 단서들을 더 찾아보자.\n");
		}
		else {
			error();
		}
		return;
	}
}


