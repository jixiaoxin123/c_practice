#define  _CRT_SECURE_NO_WARNINGS


#include "game.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.打印一行数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.打印分隔行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
				printf("|");
			}
			printf("\n");
		}
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入坐标：>");
		scanf("%d %d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				printf("落子！\n");
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}

		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}

}

void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	

}

int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j < col; j++)
		{
			
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//int Isfull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;//没满
//			}
//		}
//	}
//	return 1;//满了
//}





char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}

	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}

	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[0][0] == board[0][2] &&  board[1][1] != ' ')
		return board[1][1];
	if (1 == Isfull(board, row, col))
	{
		return 'Q';
	}
	return 'C';

}



