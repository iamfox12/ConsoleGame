#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define HEAD printf("----------------------------------��ǻ�Ϳ� ���� ���� ��!----------------------------------")

void intro(void)
{
    HEAD;
    printf("\n\n");

    Sleep(1000);
    printf("��ǻ�� : �� ����Ϸ� �� ���̳�?! ���� �̰�����!\n");
    Sleep(2000);
    printf("��ǻ�� : �󸶳� ���ϴ��� �ѹ� ����?!\n");
    Sleep(2000);
    printf("��ǻ�� : �� "); Sleep(500); printf("���� ");Sleep(500); printf("�ΰ��� ");Sleep(500); printf("��ǻ�͸� ");Sleep(500); printf("�̱� �� ");Sleep(500); printf("�����Ŷ� ������?\n");
    Sleep(1000);
    printf("��ǻ�� : ����"); Sleep(250); printf("�H�K�K��");Sleep(250); printf("����");Sleep(250); printf("�����H��");Sleep(250); printf("�����K��");Sleep(250); printf("�H�K�K��");Sleep(250); printf("����");Sleep(250); printf("�����H��");Sleep(250); printf("�����K��\n");
    Sleep(500);
    printf("��ǻ�� : ��� �ѹ� �غ�����!\n");
    Sleep(1000);
    printf("��ǻ�� : ���� 3���ϸ� �̱�°ž�!\n");
    Sleep(2000);
}
void PlayerWin(void)
{
    system("cls");

    HEAD;
    printf("\n\n");

    Sleep(1000);
    printf("��ǻ�� : �ƴ� ���� �ȵ�..!\n");
    Sleep(1000);
    printf("��ǻ�� : ��..");Sleep(500);printf("...");Sleep(500);printf("....");Sleep(1000);printf("�پ���?!\n");
    Sleep(1000);
    printf("��ǻ�� : ���� �� �� ���°Ŷ��!!\n");
    Sleep(1000);
    printf("��ǻ�� : �׷� �� ���� ����!!\n");
    Sleep(1000);
    printf("\n{�ý��� : ��ǻ�Ͱ� �����Ƿ� �� �����մϴ�!}\n\n");
    Sleep(3000);
    printf("��ǻ�� : �ƴϾƴ�..�׷� �� ����!!\n");
    Sleep(1000);
    printf("��ǻ�� : �̰� �Ұ����ϴٰ�!!\n");
    Sleep(1000);
    printf("��ǻ�� : ���� ���� �Ƴ�!!!\n");
    Sleep(300);
    printf("��ǻ�� : ����!!!!\n");
    Sleep(200);
    for (int i = 0; i < 50; i++)
    {
        printf("�������㤷�������j���㷯��������������\n");
        Sleep(50);
    }
    system("cls");
    HEAD;

    printf("\n{�ý��� : ��ǻ�Ͱ� �����Ͽ����ϴ�}\n");
    Sleep(2000);
    printf("\n{�ý��� : �����մϴ�. ��� 456���Դϴ�.}\n");
    Sleep(1000);
}
void ComputerWin(void)
{
    system("cls");

    HEAD;
    printf("\n\n");

    Sleep(1000);
    printf("��ǻ�� : ���� �̰��..? ����������\n");
    Sleep(2000);
    printf("��ǻ�� : ��� 456���� ���ž� ����\n");
    Sleep(2000);
    printf("��ǻ�� : ��Ÿ���� ���! ����\n");
    Sleep(1500);
    printf("��ǻ�� : �� ��~!\n");
    Sleep(500);

    system("cls");
    HEAD;

    printf("\n(�Ѿ� ������ �Ҹ�)\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n��!!!!\n");
        Sleep(50);
    }
    Sleep(500);

    system("cls");
    HEAD;

    printf("\n{�ý��� : ����� �׾����ϴ�.}\n");
    Sleep(2000);
    printf("\n{�ý��� : ����� ��ǻ�Ͱ� ���������ϴ�.}\n");
    Sleep(1000);
}