#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("***********1.��ʼ��Ϸ*********\n");
	printf("***********0.�˳���Ϸ*********\n");
	printf("******************************\n");
}
void game()
{
	char n = 0;
	int count = 0;
	char mine[ROWS][COLS] = { '0' };
	char show[ROWS][COLS] = { '0' };
	init(mine, show,ROWS,COLS );
	set_mine(mine, ROW, COL);//����
	Display(show, ROWS, COLS);
	//get_mine(mine,display ROW, COL);//ɨ��
	safe(show, mine, ROWS, COLS);
	Exchange(show, ROWS, COLS);
	Display(show, ROWS, COLS);
	while (1)
	{
		n=computer_move(show, mine, ROWS, COLS);
		Exchange(show, ROWS, COLS);
		Display(show, ROWS, COLS);
		if (n == 'F')
		{
			printf("�ܱ�Ǹ������ը����\n");
			break;
		}
		count=IF_Win(show, ROWS, COLS);
		if (count == N)
		{
			printf("��ϲ��ʤ\n");
				break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); 
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 0:printf("�˳���Ϸ\n"); break;
		default:printf("�����������������"); break;
		}
	} while (input);
	return 0;
}