#define ROW 3
#define COL 3
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);


//玩家赢 *  电脑赢 #   平局Q    继续  C
char Iswin(char board[ROW][COL], int row, int col);