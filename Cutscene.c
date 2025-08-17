#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define HEAD printf("----------------------------------컴퓨터와 가위 바위 보!----------------------------------")

void intro(void)
{
    HEAD;
    printf("\n\n");

    Sleep(1000);
    printf("컴퓨터 : 날 상대하러 온 것이냐?! 내가 이겨주지!\n");
    Sleep(2000);
    printf("컴퓨터 : 얼마나 잘하는지 한번 볼까?!\n");
    Sleep(2000);
    printf("컴퓨터 : 너 "); Sleep(500); printf("같은 ");Sleep(500); printf("인간이 ");Sleep(500); printf("컴퓨터를 ");Sleep(500); printf("이길 수 ");Sleep(500); printf("있을거라 생각해?\n");
    Sleep(1000);
    printf("컴퓨터 : 하하"); Sleep(250); printf("핰핳핳ㅎ");Sleep(250); printf("하하");Sleep(250); printf("하하핰ㅋ");Sleep(250); printf("하하핳ㅎ");Sleep(250); printf("핰핳핳ㅎ");Sleep(250); printf("하하");Sleep(250); printf("하하핰ㅋ");Sleep(250); printf("하하핳ㅎ\n");
    Sleep(500);
    printf("컴퓨터 : 어디 한번 해보시지!\n");
    Sleep(1000);
    printf("컴퓨터 : 먼저 3승하면 이기는거야!\n");
    Sleep(2000);
}
void PlayerWin(void)
{
    system("cls");

    HEAD;
    printf("\n\n");

    Sleep(1000);
    printf("컴퓨터 : 아니 말도 안돼..!\n");
    Sleep(1000);
    printf("컴퓨터 : 너..");Sleep(500);printf("...");Sleep(500);printf("....");Sleep(1000);printf("핵쓰지?!\n");
    Sleep(1000);
    printf("컴퓨터 : 내가 질 수 없는거라고!!\n");
    Sleep(1000);
    printf("컴퓨터 : 그럴 수 없단 말야!!\n");
    Sleep(1000);
    printf("\n{시스템 : 컴퓨터가 졌으므로 곧 폭발합니다!}\n\n");
    Sleep(3000);
    printf("컴퓨터 : 아니아니..그럴 수 없어!!\n");
    Sleep(1000);
    printf("컴퓨터 : 이건 불공정하다고!!\n");
    Sleep(1000);
    printf("컴퓨터 : 나는 진게 아냐!!!\n");
    Sleep(300);
    printf("컴퓨터 : 으악!!!!\n");
    Sleep(200);
    for (int i = 0; i < 50; i++)
    {
        printf("펑펑펑펑ㅇㅇㅇㅇ펖어펑러엉ㄹㄴㅇㄹㄴ펑\n");
        Sleep(50);
    }
    system("cls");
    HEAD;

    printf("\n{시스템 : 컴퓨터가 폭발하였습니다}\n");
    Sleep(2000);
    printf("\n{시스템 : 축하합니다. 상금 456억입니다.}\n");
    Sleep(1000);
}
void ComputerWin(void)
{
    system("cls");

    HEAD;
    printf("\n\n");

    Sleep(1000);
    printf("컴퓨터 : 내가 이겼네..? ㅋㅋㅋㅋㅋ\n");
    Sleep(2000);
    printf("컴퓨터 : 상금 456억은 내거야 ㅋㅋ\n");
    Sleep(2000);
    printf("컴퓨터 : 안타깝게 됬네! ㅋㅋ\n");
    Sleep(1500);
    printf("컴퓨터 : 잘 가~!\n");
    Sleep(500);

    system("cls");
    HEAD;

    printf("\n(총알 나가는 소리)\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n탕!!!!\n");
        Sleep(50);
    }
    Sleep(500);

    system("cls");
    HEAD;

    printf("\n{시스템 : 당신은 죽었습니다.}\n");
    Sleep(2000);
    printf("\n{시스템 : 상금은 컴퓨터가 가져갔습니다.}\n");
    Sleep(1000);
}