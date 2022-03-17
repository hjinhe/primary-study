//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//
//struct book
//{
//	char name[20];
//	int price;
//};
//
//int main()
//{
//	struct book b1 = { "C语言程序设计",55 };
//	struct book* pb = &b1;
//	strcpy( b1.name, "C++语言");
//	pb->price = 15;
//	printf("书名:%s, 价格:%d元\n",pb->name,pb->price );
//	//printf("书名:%s\n", b1.name);
//	//printf("价格:%d\n", b1.price);
//	return 0;

//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	if (a % 2 == 1)
//		printf("a是奇数\n");
//	else
//		printf("a是偶数\n");
//	return 0;
//}

//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int a = 1;
//	int n = 0;
//	int x = 1;
//	scanf("%d", &n);
//	for(a = 1; a <= n ; a++)
//	{
//		x *= a;
//	}
//	printf("n! = %d\n", x);
//	return 0;

//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[] = {13,16,19,24,29,32,35,36,44,48,85,86,88,92,94,97,99 };
//	int aim = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &aim);
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < aim)
//			left = mid + 1;
//		else if (arr[mid] > aim)
//			right = mid - 1;
//		else
//		{
//			printf("已找到目标数字%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("未能找到目标数字");
//
//		
//	return 0;
//}

//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "welcome to biter!";
//	char arr2[] = "#################";
//	short a = 0;
//	short b = sizeof(arr1)/sizeof(arr1[0]) - 2 ;
//	while (a <= b)
//	{
//		arr2[a] = arr1[a];
//		arr2[b] = arr1[b];
//		printf("%s\n",arr2);
//		a++;
//		b--;
//	}
//	return 0;
//}

//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char password[20] = { 0 };
//	short i = 0;
//	printf("请输入密码\n");
//	while (i < 3)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//			i++;
//		}
//	}
//	if (i >= 3)
//		printf("密码输入错误3次,程序退出!");
//	return 0;
//}

//#define _CRE_SUCURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a > b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a > c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b > c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1 ; i <= 100 ; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;

//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	while (c = b % a)
//	{
//		b = a;
//		a = c;
//	}
//	printf("最大公约数为 %d\n", a);
//	return 0;

//#define _CRE_SECURE_NO_WARNINGS1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year <= 2000 ; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		;
//	}
//	printf("\n%d", count);
//	return 0;
//}

//#define _CRE_SECURE_NO_WARINGS1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	int t = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (t = 2; t < i; t++)
//		{
//			if (i % t == 0)
//			{
//				break;
//			}
//		}
//		if (i == t)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//
//}

