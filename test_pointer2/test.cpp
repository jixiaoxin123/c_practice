#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>


int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	int*** pppa = &ppa;
	int arr[10];
	int* arr2[3];//指针数组
	return 0;
}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p  ==========   %p\n", p + i, &arr[i]);
//	//}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//1.&arr 取出整个数组的地址
//	//2. sizeof(arr)  数组名表示整个数组，计算的是整个数组的元素个数
//	return 0;
//}

//int mystrlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen
//	char arr[] = "bit";
//	int len=mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针相减，得到元素个数
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int* p = NULL;
//	if (pa != NULL)
//	{
//		*P = 20;
//	}
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = 20;
//
//	return 0;
//}