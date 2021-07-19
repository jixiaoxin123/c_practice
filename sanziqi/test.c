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
	//����-�����Һ͵��Ե�������Ϣ
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	//printf 
	Displayboard(board,ROW,COL);
	//����
	while (1)
	{
		// �������
		Playermove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=Iswin(board,ROW,COL);
		Displayboard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// ��������
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if(ret=='Q')
	{
		printf("ƽ��\n");
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

			printf("������\n");
			game();
			break;
		case 0:
			printf("exit!\n");
			break;
		default:
			printf("������ѡ��\n");
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