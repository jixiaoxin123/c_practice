#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char a = 3;
	//00000000000000000000000000000011
	//00000011  -  a
	//
	char b = 127;
	//00000000000000000000000001111111
	//01111111  -  b

	char c = a + b;
	//a+b
	//00000000000000000000000000000011
	//00000000000000000000000001111111
	//00000000000000000000000010000010
	//10000010  -  c
	//11111111111111111111111110000010  -  ����
	//10000000000000000000000001111101  -  ԭ��
	//-126

	printf("%d\n", c);
	return 0;
}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct stu s1 = { "Joe",20 };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->name);
//	return 0;
//}