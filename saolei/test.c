#define  _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include "game.h"

void menu()
{
	printf("*******************\n");
	printf("***1.play  0.exit**\n");
	printf("*******************\n");

}

void game()
{
	//�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	// �Ų������Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//��ӡ��Ϣ
	displayboard(mine,ROW,COL);
	displayboard(show, ROW, COL);
	//������
	setmine(mine, ROW, COL);
	//�Ų���
	findmine(mine,show,ROW,COL);



}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{

	test();
	return 0;
}