#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define HEAD printf("----------------------------------컴퓨터와 가위 바위 보!----------------------------------")

// 게임 관련
void menu(void);
void GameStart(void);
void list(void);
void restart(void);

int wins = 0, money = 0;

// 가위 바위 보 하기//
int computer(void);
int select(void);

// 컷신 //
extern void line(void);
void intro(void);
void PlayerWin(void);
void ComputerWin(void);

int main(void)
{
    menu();

	return 0;
}

extern void line(void)
{
	printf("------------------------------------------------------------------------------------------\n");
}

void menu(void)
{
    int select;

    system("cls");
    HEAD;

    printf("\n\n컴퓨터 가위 바위 보에 오신걸 환영합니다.\n\n");
    printf("사용하실 메뉴를 선택하세요.\n\n");
    printf("01 | 게임 시작\n");
    printf("02 | 내 리스트\n");
    scanf_s("%d", &select);

    switch (select)
    {
    case 1: printf("곧 게임이 시작됩니다..."); Sleep(2000); system("cls"); GameStart(); break;
    case 2: printf("\n당신의 기록입니다 : \n"); list(); break;
    }
}
void list(void)
{
    int ok;

    FILE* fp = fopen("setting.txt", "r");
    if (fp == NULL) {
        printf("기록이 없습니다.\n\n");
        printf("기록 파일을 새로 생성합니다.\n\n");

        fp = fopen("setting.txt", "w");
        fprintf(fp, "Win : %d\nMoney : %d", wins, money);
    }

    fscanf(fp, "Win : %d\nMoney : %d", &wins, &money);

    printf("우승 : %d\n돈 : %d(억)\n\n", wins, money);

    fclose(fp);

    printf("(아무 번호나 눌러 확인)\n");
    line();
    scanf_s("%d", &ok);

    menu();
}
void GameStart(void)
{
    int PlayerSelect;
    int ComputerSelect;

    int CWin = 0;
    int PWin = 0;

    FILE* fp = fopen("setting.txt", "w");
    if (fp == NULL) {
        printf("게임의 중요한 파일을 열지 못했습니다.\n");
        return;
    }

    intro();
    system("cls");

    do {
        system("cls");
        HEAD;

        printf("\n");
        PlayerSelect = select();
        ComputerSelect = computer();

        line();

        if (PlayerSelect == ComputerSelect)
        {
            printf("컴퓨터 : 후... 비겼네? 다음엔 이겨줄게!\n");
        }
        else if (PlayerSelect == 1 && ComputerSelect == 2 || PlayerSelect == 2 && ComputerSelect == 3 || PlayerSelect == 3 && ComputerSelect == 1)
        {
            ++CWin;
            if (CWin >= 3)
            {
                printf("{시스템 : 컴퓨터가 이겼습니다! 3초 뒤 아웃트로로 넘어갑니다.}");
                Sleep(3000);
                ComputerWin();

                break;
            }
            else
            {
                printf("컴퓨터 : 1승 내가 가져갈게?! 하하하 ㅋㅋ\n");
            }
        }
        else if (PlayerSelect == 2 && ComputerSelect == 1 || PlayerSelect == 3 && ComputerSelect == 2 || PlayerSelect == 1 && ComputerSelect == 3)
        {
            ++PWin;
            if (PWin >= 3)
            {
                fprintf(fp, "Win : %d\nMoney : %d", ++wins, money += 456);
                printf("\n{시스템 : 당신이 이겼습니다! 3초 뒤 아웃트로로 넘어갑니다!}");
                Sleep(3000);
                PlayerWin();

                break;
            }
            else
            {
                printf("컴퓨터 : 으으.. 1승을 뺏겨버렸군!\n");
            }
        }

        printf("\n현재 스코어\n 플레이어 %d : %d 컴퓨터\n", PWin, CWin);

        Sleep(2000);
        printf("\n{시스템: 3초 뒤 다시 시작합니다.}");
        Sleep(3000);

    } while (1);

    fclose(fp);
    restart();
}

void restart(void)
{
    int play_again;

    printf("{시스템 : 메인 메뉴로 돌아가시겠습니까?} (O : 1 / X : 2) : ");
    fflush(stdin);
    scanf_s("%d", &play_again);

    if (play_again == 1)
    {
        system("cls");
        menu();
    }
    else
    {
        exit(1);
    }
}