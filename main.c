#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define HEAD printf("----------------------------------��ǻ�Ϳ� ���� ���� ��!----------------------------------")

// ���� ����
void menu(void);
void GameStart(void);
void list(void);
void restart(void);

int wins = 0, money = 0;

// ���� ���� �� �ϱ�//
int computer(void);
int select(void);

// �ƽ� //
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

    printf("\n\n��ǻ�� ���� ���� ���� ���Ű� ȯ���մϴ�.\n\n");
    printf("����Ͻ� �޴��� �����ϼ���.\n\n");
    printf("01 | ���� ����\n");
    printf("02 | �� ����Ʈ\n");
    scanf_s("%d", &select);

    switch (select)
    {
    case 1: printf("�� ������ ���۵˴ϴ�..."); Sleep(2000); system("cls"); GameStart(); break;
    case 2: printf("\n����� ����Դϴ� : \n"); list(); break;
    }
}
void list(void)
{
    int ok;

    FILE* fp = fopen("setting.txt", "r");
    if (fp == NULL) {
        printf("����� �����ϴ�.\n\n");
        printf("��� ������ ���� �����մϴ�.\n\n");

        fp = fopen("setting.txt", "w");
        fprintf(fp, "Win : %d\nMoney : %d", wins, money);
    }

    fscanf(fp, "Win : %d\nMoney : %d", &wins, &money);

    printf("��� : %d\n�� : %d(��)\n\n", wins, money);

    fclose(fp);

    printf("(�ƹ� ��ȣ�� ���� Ȯ��)\n");
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
        printf("������ �߿��� ������ ���� ���߽��ϴ�.\n");
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
            printf("��ǻ�� : ��... ����? ������ �̰��ٰ�!\n");
        }
        else if (PlayerSelect == 1 && ComputerSelect == 2 || PlayerSelect == 2 && ComputerSelect == 3 || PlayerSelect == 3 && ComputerSelect == 1)
        {
            ++CWin;
            if (CWin >= 3)
            {
                printf("{�ý��� : ��ǻ�Ͱ� �̰���ϴ�! 3�� �� �ƿ�Ʈ�η� �Ѿ�ϴ�.}");
                Sleep(3000);
                ComputerWin();

                break;
            }
            else
            {
                printf("��ǻ�� : 1�� ���� ��������?! ������ ����\n");
            }
        }
        else if (PlayerSelect == 2 && ComputerSelect == 1 || PlayerSelect == 3 && ComputerSelect == 2 || PlayerSelect == 1 && ComputerSelect == 3)
        {
            ++PWin;
            if (PWin >= 3)
            {
                fprintf(fp, "Win : %d\nMoney : %d", ++wins, money += 456);
                printf("\n{�ý��� : ����� �̰���ϴ�! 3�� �� �ƿ�Ʈ�η� �Ѿ�ϴ�!}");
                Sleep(3000);
                PlayerWin();

                break;
            }
            else
            {
                printf("��ǻ�� : ����.. 1���� ���ܹ��ȱ�!\n");
            }
        }

        printf("\n���� ���ھ�\n �÷��̾� %d : %d ��ǻ��\n", PWin, CWin);

        Sleep(2000);
        printf("\n{�ý���: 3�� �� �ٽ� �����մϴ�.}");
        Sleep(3000);

    } while (1);

    fclose(fp);
    restart();
}

void restart(void)
{
    int play_again;

    printf("{�ý��� : ���� �޴��� ���ư��ðڽ��ϱ�?} (O : 1 / X : 2) : ");
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