//#define 

#include<stdio.h>

int* test()
{
	int a = 10;
	return &a;
}


int main()
{

	int* p=test();//a�Ŀռ��Ѿ����ͷ�
	return 0;
}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;//�п���Խ��
//	}
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = 20;//�����ʼ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;//�ĸ��ֽ�ȫΪ0 00 00 00 00  11 22 33 44
//	char* pa = &a;
//	*pa = 0;//�����ֽ� 
//	//ָ�����;�����ָ����н�����ʱ�ܷ��ʵĿռ�Ĵ�С
//	//int 4���ֽ�  char 1  double  8
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}