#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请依次输入m和n\n");
//	scanf("%d%d", &m, &n);
//	while (r = m%n)//简化算法，提高效率
//	{
//		m = n;
//		n = r;
//	}//辗转相除法求最大公约数
//	printf("m和n的最大公约数为：%d\n", n);
//	return 0;
//}

//#include<math.h>//sqrt()
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 101; i <= 200; i+=2)//跳过偶数，偶数不可能是素数
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//i的所有除数“关于sqrt(i)对称”，后面的数可以省略
//		{
//			if (i%j==0)
//			{
//				break;
//				
//			}
//		}
//		if (j>sqrt(i))
//		{
//			k++;
//			printf("%d  ", i);
//		}
//	}
//	printf("\n");
//	printf("素数个数为：%d\n", k);
//	return 0;
//}