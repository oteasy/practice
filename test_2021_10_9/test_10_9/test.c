#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age < 28 && age >= 18)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	return 0;
//}

////else�������ifƥ��
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
//	if (5 == num)//������д�ڡ�==����ߣ����ڷ��ִ���
//		printf("�Ǻ�\n");
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
//	switch (day)//�����ڱ���Ϊ����
//	{
//	case 1://case��Ϊ���γ������ʽ
//	case 2://case�ڲ�����Ϊif����䣬������Ϊcontinue
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//���һ��break��Ҫʡ�ԣ����ں����������case
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
//		{//switch����Ƕ��ʹ��
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
	while ((ch = getchar()) != EOF)//ctrl+z����  ,EOF - end of file -> -1
	{
		putchar(ch);
	}
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}