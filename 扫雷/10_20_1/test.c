#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("***********1.开始游戏*********\n");
	printf("***********0.退出游戏*********\n");
	printf("******************************\n");
}
void game()
{
	char n = 0;
	int count = 0;
	char mine[ROWS][COLS] = { '0' };
	char show[ROWS][COLS] = { '0' };
	init(mine, show,ROWS,COLS );
	set_mine(mine, ROW, COL);//布雷
	Display(show, ROWS, COLS);
	//get_mine(mine,display ROW, COL);//扫雷
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
			printf("很抱歉，您被炸死了\n");
			break;
		}
		count=IF_Win(show, ROWS, COLS);
		if (count == N)
		{
			printf("恭喜获胜\n");
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
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 0:printf("退出游戏\n"); break;
		default:printf("输入错误，请重新输入"); break;
		}
	} while (input);
	return 0;
}