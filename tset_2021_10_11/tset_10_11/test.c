#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF-end of file  文件结束标志
//	{
//		putchar(ch);
//	}
//}

//int main()
//{
//	char ch = 0;
//	char ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，并存放在password数组中,数组名即地址，故不用加&
//	//输入密码后回车导致输入缓冲区中剩余\n
//	//使用getchar前应清空输入缓冲区
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）:>");
//	ret = getchar();
//	//使用getchar前应清空输入缓冲区
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//		//	continue;//死循环
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int num = 1;
//	printf("请输入n\n");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		num = num*i;
//		i++;
//	}
//	printf("n!=%d\n", num);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int num = 1;
//	int sum = 0;
//	printf("请输入n\n");
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		num = num*i;
//		sum += num;
//	}
//	printf("n!=%d\n", num);
//	printf("1!+2!+...+n!=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//右下标
//	int right=sz - 1;//左下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;//不能去掉-1，否则可能进入死循环，如在12345689中查找7
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//		printf("找不到\n");
//	return 0;
//}

//#include<Windows.h>//Sleep()
//#include<stdlib.h>//system()
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//sizeof会将\0一起计算
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("welcome to bit!!!!!!\n");
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20]= { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s", password);
		//if (password == "123456")//==不能用来判断字符串是否相等
		if (!strcmp(password, "123456"))//第一个字符串 > = < 第二个字符串的情况分别返回大于0、等于0、小于0的值
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	if (3 == i)
		printf("三次密码均错误，退出程序\n");
	return 0;
}