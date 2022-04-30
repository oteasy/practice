#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age < 28 && age >= 18)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	return 0;
//}

////else和最近的if匹配
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	    if (b == 2)
//		    printf("hehe\n");
//	    else
//		    printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)//将常量写在“==”左边，便于发现错误
//		printf("呵呵\n");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 0;
//	while(a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("  %d",a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//括号内必须为整形
//	{
//	case 1://case后为整形常量表达式
//	case 2://case内部可以为if等语句，但不能为continue
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//最后一个break不要省略，便于后续继续添加case
//	default:
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl+z结束  ,EOF - end of file -> -1
	{
		putchar(ch);
	}
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}