#include <stdio.h>
#include <stdlib.h>

int computer(void)
{
	int select;

	select = (rand() % 3) + 1;

	switch (select)
	{
	case 1: printf("��ǻ���� ������ ����!\n"); break;
	case 2: printf("��ǻ���� ������ ����!\n"); break;
	case 3: printf("��ǻ���� ������ ��!\n"); break;
	}

	return select;
}

int select(void)
{
	int Pselect;

	printf("01 ���� / 02 ���� / 03 ��\n");
	printf("�����ϼ���! : ");
	scanf_s("%d", &Pselect);

	printf("\n");

	switch (Pselect)
	{
	case 1: printf("����� ������ ����!\n"); break;
	case 2: printf("����� ������ ����!\n"); break;
	case 3: printf("����� ������ ��!\n"); break;
	}

	return Pselect;
}