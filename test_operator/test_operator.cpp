#define  _CRT_SECURE_NO_WARNINGS	9

#include<stdio.h>

int main()
{
	int a = 11;
	a = a | (1 << 2);
	printf("%d\n", a);
	a=a& (~(1 << 2));
	printf("%d\n", a);
}

//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//}

//求一个整数存储在内存中二进制的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//32bit
//	//00000000000000000000000000000011
//	//num&1==1
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	
//	}
//	/*while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num = num / 2;
//		}
//	}*/
//	printf("%d", count);
//	return 0;
//}

//不使用第三个变量，交换两个变量的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	return 0;
//}

//int main()
//{
//	//按位或
//	int a = 3;
//	int b = 5;
//	//int c = a | b;
//	////0000000000000000000000000000111
//	//printf("%d\n", c);
//	//return 0;
//
//	//按位异或
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	printf("%d\n", c);
//	return 0;
//
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	//00000000000000000000000000001010 - 左边丢弃，右边补0
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111  补码
//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//
//	int a = 5 % 2;
//	printf("a=%d\n", a);
//	return 0;
//}