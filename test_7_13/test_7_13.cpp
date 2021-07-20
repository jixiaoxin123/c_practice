#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
	int len = 0;
	len = strlen("abs");
	printf("%d ", len);
	printf("%d ", strlen("abc"));
	printf("%d", printf("%d", printf("%d", 43)));//printf 返回打印字符的个数
	return 0;
}

//void ADD(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d ", num);
//	ADD(&num);
//	printf("num=%d ", num);
//	return 0;
//}

//int binary_search(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//	
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//	//printf("%d", ret);
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//
//	}
//	else
//	{
//		printf("下标为：%d\n", ret);
//	}
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if((y%4==0&&y%100!=0)||(y%400==0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 2;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			break;
//		}
//	}
//	if (j > sqrt(n))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	//打印100-200的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}




//memset
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}




//strcpy
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}