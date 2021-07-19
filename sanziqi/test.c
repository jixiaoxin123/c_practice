//test
#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("****1.play   0.exit****\n");
	printf("***********************\n");
}

void game()
{
	char ret = 0;
	//数组-存放玩家和电脑的棋盘信息
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	//printf 
	Displayboard(board,ROW,COL);
	//下棋
	while (1)
	{
		// 玩家下棋
		Playermove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret=Iswin(board,ROW,COL);
		Displayboard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// 电脑下棋
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断电脑是否赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if(ret=='Q')
	{
		printf("平局\n");
	}
	else
		printf("invalid !");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		
		scanf("%d", &input);
		switch (input)
		{
		case 1:

			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("exit!\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}

int main()
{
	test();
	return 0;
}