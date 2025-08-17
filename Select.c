#include <stdio.h>
#include <stdlib.h>

int computer(void)
{
	int select;

	select = (rand() % 3) + 1;

	switch (select)
	{
	case 1: printf("컴퓨터의 선택은 가위!\n"); break;
	case 2: printf("컴퓨터의 선택은 바위!\n"); break;
	case 3: printf("컴퓨터의 선택은 보!\n"); break;
	}

	return select;
}

int select(void)
{
	int Pselect;

	printf("01 가위 / 02 바위 / 03 보\n");
	printf("선택하세요! : ");
	scanf_s("%d", &Pselect);

	printf("\n");

	switch (Pselect)
	{
	case 1: printf("당신의 선택은 가위!\n"); break;
	case 2: printf("당신의 선택은 바위!\n"); break;
	case 3: printf("당신의 선택은 보!\n"); break;
	}

	return Pselect;
}