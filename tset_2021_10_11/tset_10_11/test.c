#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF-end of file  �ļ�������־
//	{
//		putchar(ch);
//	}
//}

//int main()
//{
//	char ch = 0;
//	char ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������룬�������password������,����������ַ���ʲ��ü�&
//	//���������س��������뻺������ʣ��\n
//	//ʹ��getcharǰӦ������뻺����
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N��:>");
//	ret = getchar();
//	//ʹ��getcharǰӦ������뻺����
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
//		//	continue;//��ѭ��
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
//	printf("������n\n");
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
//	printf("������n\n");
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right=sz - 1;//���±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;//����ȥ��-1��������ܽ�����ѭ��������12345689�в���7
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//#include<Windows.h>//Sleep()
//#include<stdlib.h>//system()
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//sizeof�Ὣ\0һ�����
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ��
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
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
		printf("����������\n");
		scanf("%s", password);
		//if (password == "123456")//==���������ж��ַ����Ƿ����
		if (!strcmp(password, "123456"))//��һ���ַ��� > = < �ڶ����ַ���������ֱ𷵻ش���0������0��С��0��ֵ
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (3 == i)
		printf("��������������˳�����\n");
	return 0;
}