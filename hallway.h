#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include "insert.h"
#include "ending.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>

void startStory_3();
void forward();
void girl_first();
void girl();

const char* text;
extern int key_1, key_2, key_3, key_4, key_5, key_6, key_7, delay;
int with_girl;



void startStory_3() {
	system("cls");
	printf("\"연구원 가운을 입고 카드키로 출입문을 열자 긴복도가 늘어져 있었다. 복도는 음산한 분위기로 가득 차 있었고, 곳곳에 경비원들이 자리를 지키고 있었다. 가운 덕분인가 경비들은 나를 붙잡지 않았다.\"\n\n");
	printf("정면에 밖으로 나가는 출구가 보이고 다른 방엔 힘없이 주저 앉아있는 여자가 갇혀있는게 보였다.\n\n");
}


void forward() {
	system("cls");
	text = "문은 다행이 잠겨있지 않았다 이대로 얼른 밖으로 나가자.";
	slow_print(text, delay);
	printf("\n아무 숫자나 눌러 계속.\n");
	select();
	if (key_7 != 1 && with_girl != 1)           normal_ending();
	else if (key_7 == 1 && with_girl != 1)      bad_ending2();
	else if (key_7 == 1 && with_girl == 1)      happy_ending1();
	else if (key_7 != 1 && with_girl == 1)      happy_ending2();
}

void girl_first() {
	system("cls");
	if (key_2 == 1) {	
		text = "\"가까이 다가가자, 그제야 여자가 침대 밑에서 얻은 사진 속 인물이라는 걸 깨달았다.\"\n";
		slow_print(text, delay);
		printf("\n아무 숫자나 눌러 계속.\n");
		select();
		girl();
	}
	else
	{
		printf("\"가까이 다가가 얼굴을 확인 해봤지만 누군지 기억이 나지 않는다.. 지금은 탈출이 최우선이다.\"");
	}
}
void girl() {
	system("cls");
	if (key_2 == 1) {
		int x;
		printf("비밀번호 입력하는 곳 위에 작은 숫자가 적혀있다.\n6128 + 9091 = 9825\n8159 + 1912 = ?\n");
		printf("\"비밀번호를 입력해 여자를 구출하자.\"\n\n비밀번호 : \n");
		x = select();
		if (x == 8679) {
			printf("\n구출하는데 성공했다! \n 하지만 그 모습을 수상하게 본 경비들이 우리를 잡으려 다가온다 얼른 문 밖으로 나가자");
			with_girl = 1;
			printf("\n아무 숫자나 눌러 계속.\n");
			select();
			forward();
		}
		else 	error();
		
	}
	else {
		printf("\"가까이 다가가 얼굴을 확인 해봤지만 누군지 기억이 나지 않는다.. 지금은 탈출이 최우선이다.\"");
	}
	
}