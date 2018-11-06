#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("******   1.开始游戏   *******\n");
	printf("******   0.结束游戏   *******\n");

}

void init_board(char board[ROW][COL], int row, int col)
{
	memset(&board[0][0],' ',row*col*sizeof(board[0][0]));
}
void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}

void play_move(char board[ROW][COL], int row, int col,int n)
{
	int x = 0, y = 0;
	while (1)
	{
		printf("请玩家输入坐标：->");
		scanf("%d%d",&x,&y);
		if (x >=1 && x <= n&& y>=1 && y <=n && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = 'X';
			break;
		}
		else printf("输入错误请重新输入\n");
	}
}
void compture_move(char board[ROW][COL], int row, int col,int n)
{
	while (1)
	{
		int x = rand() % n;
		int y = rand() % n;
		printf("电脑走\n");
		if (board[x][y] == ' ')
		{
			board[x][y] = 'Y';
			break;
		}
	}
}
char IF_WIN(char board[ROW][COL], int row, int col,int n )
{
	int i = 0;
		for (i = 0; i < row; i++)
		{
			int j = 0;
			int count = 0;
			char  ret = board[i][0];
			for (j = 1; j < col; j++)
			{
				if (ret== board[i][j])
				{
					count++;
				}
			}
			if (count == n-1)
			{
				return board[i][0];
			}
		}
		for (i = 0; i < row; i++)
		{
			int j = 0, count = 0;
			char  ret = board[0][i];
			for (j = 1; j < col; j++)
			{
				if (ret== board[j][i])
				{
					count++;
				}
			}
			if (count == n-1)
			{
				return board[0][i];
			}
		}

		for (i = 0; i < row; i++)
		{
			int j = 0, count = 0;
			char ret = board[0][0];
			for (j = i; j <= i; j++)
			{
				if (ret== board[i][j])
				{
					count++;
				}
			}
			if (count == n-1)
			{
				return board[0][0];
			}
		}

		for (i = 0; i < row; i++)
		{
			int j = 0, count = 0;
			char ret = board[0][2];
			for (j = 1-i; j <=1- i; j++)
			{
				if (ret==board[j][i])
				{
					count++;
				}
			}
			if (count == n-1)
			{
				return board[0][2];
			}
			
		}
		if (1 == is_full(board, ROW, COL))
		{
			return 'Q';
		}
}
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	char ret = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			ret += board[i][j];
		}
	}
	if (ret == (' '*row*col))
		return 1;
}
