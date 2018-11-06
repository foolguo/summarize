#define _CRT_SECURE_NO_DEPRECATE 1
#ifndef __GAME_H_ 
#define __GAME_H_

#include <stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 5
#define COL 5
void menu();
void game(char board[ROW][COL],int row,int col,int n);
void init_board(char board[ROW][COL], int row, int col);
void print_board(char board[ROW][COL], int row, int col);
void play_move(char board[ROW][COL], int row, int col,int n);
void compture_move(char board[ROW][COL], int row, int col, int n);
char  IF_WIN(char board[ROW][COL], int row, int col,int n);
int is_full(char board[ROW][COL], int row, int col);
#endif