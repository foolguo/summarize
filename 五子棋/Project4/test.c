#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include "game.h"
void game(char board[ROW][COL], int row, int col,int n)
{
	char ch = { 0 };
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		play_move(board, ROW, COL,n);
		ch=IF_WIN(board, ROW, COL,n);
		if ('X' == ch)
		{
			printf("���Ӯ\n");
		}
		else if ('Y' == ch)
		{
			printf("����Ӯ\n");
		}
		else if ('Q' == ch)
		{
			printf("ƽ��\n");
		}
		print_board(board, ROW, COL);
		compture_move(board, ROW, COL,n);
		ch = IF_WIN(board, ROW, COL, n);
		if ('X' == ch)
		{
			printf("���Ӯ\n");
		}
		else if ('Y' == ch)
		{
			printf("����Ӯ\n");
		}
		else if ('Q' == ch)
		{
			printf("ƽ��\n");
		}
		print_board(board, ROW, COL);
	}
}
int main()
{
	char board[ROW][COL] = {0};
	int input = 0;
	int n = 0;
	printf("��ѡ��Ҫ��ļ�����\n");
	scanf("%d", &n);
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("������ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(board,ROW,COL,n); break;
		case 0:break;
		default:printf("��������룬���������룺>"); break;
		}
	} while (input);
	return 0;
}