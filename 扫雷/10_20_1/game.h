#define _CRT_SECURE_NO_DEPRECATE 1
#ifndef __GAME_H_
#define __GAME_H_
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 10
void init(char mine[ROWS][COLS], char show[ROW][COL], int row, int col);
void set_mine(char mine[ROWS][COLS], int row, int col);
void Display(char show[ROW][COL], int row, int col);
char computer_move(char show[ROW][COL], char mine[ROWS][COLS], int row, int col);
int swap(char mine[ROWS][COLS], int x, int y);
int IF_Win(char show[ROWS][COLS], int row, int col);
void open(char mine[ROWS][COLS],char show[ROWS][COLS],int x, int y);
void safe(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);
void Exchange(char show[ROWS][COLS], int row, int col);
int IF_open(char show[ROWS][COLS], int x, int y);
#endif // !__GAME_H_
