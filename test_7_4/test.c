#define  _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main()
{
	int i = 0;
	char passward[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("print password:");
		scanf("%s", passward);
		if (strcmp(passward, "123456")==0)
		{
			printf("success\n");
			break;
		}
		else
		{
			printf("error\n");

		}
		if (i == 3)
		{
			printf("exit!\n");
		}
	}
	return 0;
}


// 
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//减去\0,数组元素减一
//	int right = strlen(arr1)-1;
//	while (left<right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//清空屏幕
//		left++;
//		right--;
//
//
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	
//	int n=0;
//	int i = 0;
//	int result = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		result = i * result;
//	}
//	printf("%d", result);
//	return 0;
//}