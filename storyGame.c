#define _CRT_SECURE_NO_WARNINGS

#include "insert.h"
#include "room_1.h"
#include "room_2.h"
#include "hallway.h"
#include "ending.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>

void phase0_loop();
void phase1_loop();
void phase2_loop();

int phase = 0;

int main() {
    if (phase == 0) {
        startStory_1();
        phase0_loop();
    }

    if (phase == 1) {
        startStory_2();
        phase1_loop();
    }

    if (phase == 2) {
        startStory_3();
        phase2_loop();
    }
    return 0;
}

    void phase0_loop() {
        int n;
        do {
            system("cls");
            if (phase == 1) {
                system("cls");   break;
            }
            printf("천장엔 전구들이 깜빡이며 빛을 비추고 있었다.\n\n1. 침대를 조사한다\n\n2. 책상을 조사한다.\n\n3. 문을 조사한다.\n\n4. 얻은 정보를 확인한다.\n\n0. 종료\n\n");
            n = select();

            switch (n) {
            case 1: bed();              system("pause");	system("cls");		break;
            case 2: desk();             system("pause");	system("cls");		break;
            case 3: door();             system("pause");	system("cls");		break;
            case 4: obtain();           system("pause");	system("cls");		break;
            case 0: printf("종료되었습니다.\n");	exit(0);                 	break;
            default:	 printf("잘못입력하였습니다.\n\n"); system("pause");	system("cls");
            }
        } while (n != 0);
    }



   void phase1_loop(){
       int n;
        do {
            if (phase == 2) {
                system("cls");   break;
            }
            printf("이제 어디로 이동할까.\n\n1. 왼쪽으로 간다.\n\n2. 오른쪽으로 간다.\n\n3. 연구원들에게 다가간다.\n\n4. 얻은 정보를 확인한다.\n\n0. 종료\n\n");
            n = select();

            switch (n) {
            case 1: left();              system("pause");	system("cls");		break;
            case 2: right();             system("pause");	system("cls");		break;
            case 3: researcher();        system("pause");	system("cls");		break;
            case 4: obtain();            system("pause");	system("cls");		break;
            case 0: printf("종료되었습니다.\n");	exit(0);                	break;
            default:	 printf("잘못입력하였습니다.\n\n"); system("pause");	system("cls");
            }
        } while (n != 0);
    }

    void phase2_loop(){
        int n;
     
        int g=0;
        do {
            printf("이제 어디로 이동할까.\n\n1. 정면으로 간다.\n\n2. 여자를 확인한다.\n\n3. 이전 방으로 돌아간다.\n\n4. 얻은 정보를 확인한다.\n\n0. 종료\n\n");
            n = select();

            switch (n) {
            case 1: forward();                                              system("pause");	system("cls");		break;
            case 2: if(g == 0){ girl_first(); g++; }else girl();            system("pause");	system("cls");		break;
            case 3: phase--;  system("cls");   phase1_loop();               system("pause");	system("cls");		break;
            case 4: obtain();                                               system("pause");	system("cls");		break;
            case 0: printf("종료되었습니다.\n");                            exit(0);                          		break;
            default:	 printf("잘못입력하였습니다.\n\n"); system("pause");	system("cls");
            }
        } while (n != 0);
    }