#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include "game.h"
void init(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//初始化数组
{
	int i = 0, j = 0;
	for (i = 0; i < row ; i++)
	{
		for (j = 0; j < col ; j++)
		{
			mine[i][j] = '0';
			show[i][j] = '*';
		}
	}
}

void set_mine(char mine[ROWS][COLS], int row, int col)//布雷
{
	
	int n = N, x = 0, y = 0;
	while(n>0)
	{
		 x = rand() % 8 + 1;
		 y = rand() % 8 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			n--;
		}
	}
}

void Display(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("   ");
	for (i = 1; i < row-1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <row - 1; i++)
	{
		int j = 0;
		printf(" %d", i);
		for (j = 1; j < col - 1; j++)
		{
			printf(" %c", show[i][j]);
		}
		printf("\n");
	}
}
//扫雷
char computer_move(char show[ROWS][COLS],char mine[ROWS][COLS] ,int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int ret = 0;
		while (1)
		{
			printf("请输入坐标\n");
			scanf("%d%d", &x, &y);//玩家输入坐标
			if (x >= 1 && x < row - 1 && y >= 1 && y < col - 1)//判断坐标是否为1-9的数，不是重新输入
			{
				if (mine[x][y] == '0')//判断mine[x][y]是否等于‘0’
				{
					ret = swap(mine, x, y);
					show[x][y] =ret+'0';//判断坐标（x,y)附近有几个雷
					open(mine,show,x, y);
					break;
				}
				else if (mine[x][y] == '1')//如果为1返回F
				{
					return 'F';
				}
			}
			else
				printf("输入错误，请重新输入\n");
		}
}
int swap(char mine[ROWS][COLS],int x,int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1])-('0'*8) ;
}
int IF_Win(char show[ROWS][COLS], int row, int col)//判断*个数返回
{
	int i = 0;
	int count = 0;
	for (i = 1; i < row - 1; i++)
	{
		int j = 0;
		for (j = 1; j < col - 1; j++)
		{
			if(show[i][j]=='*')
			{
				count++;
			}
		}
	}
	return count;
}

int IF_open(char show[ROWS][COLS],int x,int y)
{
	if (show[x][y] == '*'&&x >= 1 && x < ROWS - 1 && y >= 1 && y <  COLS- 1)
	{
		return 1;
	}
	else return -1;
}
void open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//展开函数
{
	int n = 1;
	if (n == IF_open(show, x - 1, y))
	{
		if ((swap(mine, x - 1, y) + '0') != '0')
		{
			show[x-1][y]= swap(mine, x - 1, y) + '0';
		}
		else
		{
			show[x - 1][y] = swap(mine, x - 1, y) + '0';
			open(mine, show, x - 1, y);
		}
	}
	if (n == IF_open(show, x - 1, y-1))
	{
		if ((swap(mine, x - 1, y-1) + '0') != '0')
		{
			show[x - 1][y-1] = swap(mine, x - 1, y-1) + '0';
		}
		else
		{
			show[x - 1][y-1] = swap(mine, x - 1, y-1) + '0';
			open(mine, show, x - 1, y-1);
		}
	}
	if (n == IF_open(show, x , y - 1))
	{
		if ((swap(mine, x , y - 1) + '0') != '0')
		{
			show[x ][y - 1] = swap(mine, x , y - 1) + '0';
		}
		else
		{
			show[x ][y - 1] = swap(mine, x , y - 1) + '0';
			open(mine, show, x , y - 1);
		}
	}
	if (n == IF_open(show, x-1, y - 1))
	{
		if ((swap(mine, x-1, y - 1) + '0') != '0')
		{
			show[x-1][y - 1] = swap(mine, x-1, y - 1) + '0';
		}
		else
		{
			show[x - 1][y - 1] = swap(mine, x-1, y - 1) + '0';
			open(mine, show, x-1, y - 1);
		}
	}
	if (n == IF_open(show, x + 1, y ))
	{
		if ((swap(mine, x + 1, y) + '0') != '0')
		{
			show[x +1][y ] = swap(mine, x +1, y) + '0';
		}
		else
		{
			show[x + 1][y ] = swap(mine, x +1, y ) + '0';
			open(mine, show, x + 1, y );
		}
	}	
	if (n == IF_open(show, x + 1, y+1))
	{
		if ((swap(mine, x + 1, y+1) + '0') != '0')
		{
			show[x + 1][y+1] = swap(mine, x + 1, y+1) + '0';
		}
		else
		{
			show[x + 1][y+1] = swap(mine, x + 1, y+1) + '0';
			open(mine, show, x + 1, y+1);
		}
	}
	if (n == IF_open(show, x , y + 1))
	{
		if ((swap(mine, x , y + 1) + '0') != '0')
		{
			show[x ][y + 1] = swap(mine, x , y + 1) + '0';
		}
		else
		{
			show[x ][y + 1] = swap(mine, x , y + 1) + '0';
			open(mine, show, x , y + 1);
		}
	}
	if (n == IF_open(show, x-1, y + 1))
	{
		if ((swap(mine, x-1, y + 1) + '0') != '0')
		{
			show[x-1][y + 1] = swap(mine, x-1, y + 1) + '0';
		}
		else
		{
			show[x-1][y + 1] = swap(mine, x-1, y + 1) + '0';
			open(mine, show, x-1, y + 1);
		}
	}

	/*if (mine[x - 1][y]=='0')
	{
		open(mine, show, x-1, y);
	}
	show[x - 1][y] = swap(mine, x - 1, y) + '0';
	   
	if (mine[x - 1][y - 1] == '0')
	{
		show[x - 1][y - 1] = swap(mine, x-1, y-1) + '0';
	}
	if (mine[x][y - 1] == '0')
	{
		show[x][y - 1] = swap(mine, x, y - 1) + '0';
	}

	if (mine[x + 1][y - 1] == '0')
	{
		show[x + 1][y - 1] = swap(mine, x+1, y-1) + '0';
	}
	if (mine[x + 1][y] == '0')
	{
		open(mine, show, x +1, y);
	}
	show[x + 1][y] = swap(mine, x + 1, y) + '0';
	
	if (mine[x + 1][y+1] == '0')
	{
		show[x + 1][y+1] = swap(mine, x+1, y+1) + '0';
	}
	if (mine[x ][y + 1] == '0')
	{
		show[x][y + 1] = swap(mine, x, y + 1) + '0';
		
	}
	
	if (mine[x - 1][y + 1] == '0')
	{
		show[x -1][y + 1] = swap(mine, x-1, y+1) + '0';
	}
*/
}


void safe(char show[ROW][COL], char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int n = 1;
	int ret = 0;
	char s = { 0 };
	while (1)
	{
		printf("请输入坐标\n");
		scanf("%d%d", &x, &y);//玩家输入坐标
		if (x >= 1 && x < row - 1 && y >= 1 && y < col - 1)
		{
			if (mine[x][y] == '1')
			{
				mine[x][y] = '0';
				ret = swap(mine, x, y);
				show[x][y] = ret + '0';//判断坐标（x,y)附近有几个雷
				open(mine, show, x, y);
				break;
			}
			else if (mine[x][y] == '0')//判断mine[x][y]是否等于‘0’
			{
				ret = swap(mine, x, y);
				show[x][y] = ret + '0';//判断坐标（x,y)附近有几个雷
				open(mine, show, x, y);
				break;
			}
		}
		else{
			printf("输入错误，请重新输入\n");
		}
	}
	while (n)
	{
		x = rand() % 8 + 1;
		y = rand() % 8 + 1;
		if (mine[x][y] = '0')
		{
			mine[x][y] = '1';
			n--;
		}
	}
}
void Exchange(char show[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 1; i < row - 1; i++)
	{
		int j = 0;
		for (j = 1; j < col - 1; j++)
		{
			if (show[i][j] == '0')
			{
				show[i][j] = ' ';
			}
		}
	}
}


//判


